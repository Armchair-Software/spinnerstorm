# spinnerstorm

Tiny header-only spinner utility with a small library of spinner frames. It is intended
for command-line tools that need to show "work in progress" activity without flooding
the terminal (e.g., during file processing, network calls, or long loops).

A spinner can provide a fast indication of how fast work is progressing, or whether work
has stalled, without having to know the full size of the work in advance (as you might
for a progress bar - for that, see the [progressstorm](https://github.com/Armchair-Software/progressstorm) library).

## Why this library

- Header-only and easy to drop into a project without build system changes.
- Compile-time spinner data: collections are `constexpr`, so frames and sizes are known
  at compile time and there are no dynamic allocations.
- Cheap updates: the spinner uses bitmasking when the collection size is a power of two.

## Interval optimization

`spinner<Interval, ...>` updates the display only every N+1 calls (where `Interval` is a
power-of-two-minus-one). This reduces terminal I/O, which is often the bottleneck in
tight loops. For large workloads, a higher interval significantly lowers overhead while
still showing visible progress.

## Spinner customisation

A selection of spinner animations are provided in `spinnerstorm/spinners.h`.  You can
select any of these as template parameters when instantiating the `spinner` class.  Any
that are not used in your program should be optimised out by your compiler, keeping your
build free of bloat.

You can define your own custom spinners as a std::array of string_views, which you can
pass as a template parameter to the spinner class - see the example below.

## Usage

Minimal (defaults to ASCII spinner and `Interval = 1023`):

```cpp
#include "spinnerstorm/spinner.h"

int main() {
  spinnerstorm::spinner spinner;
  // ... work ...
  spinner.update();
}
```

Explicit spinner selection:

```cpp
#include "spinnerstorm/spinnerstorm.h"

int main() {
  spinnerstorm::spinner<1023, spinnerstorm::spinners::arrows> spinner;
  // ... work ...
  spinner.update();
}
```

## Custom spinners

Define a custom spinner collection as a `constexpr` array and pass it as the second template argument:

```cpp
#include <array>
#include <string_view>
#include "spinnerstorm/spinner.h"

inline constexpr auto my_spinner{
  std::to_array<std::string_view>({"[    ]", "[=   ]", "[==  ]", "[=== ]", "[====]"})
};

int main() {
  spinnerstorm::spinner<1023, my_spinner> spinner;
  // ... work ...
  spinner.update();
}
```
