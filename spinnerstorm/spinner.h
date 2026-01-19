#pragma once
#include <iostream>
#include "spinners.h"

namespace spinnerstorm {

template<size_t Interval = 1023, auto const& SpinnerItems = spinners::ascii>
class spinner {
  static_assert((Interval & (Interval + 1)) == 0, "Interval must be a power of two minus one");
  static constexpr bool is_power_of_two(size_t value) {
    return value != 0U && ((value & (value - 1U)) == 0U);
  }

  static constexpr auto spinner_items = SpinnerItems;
  static constexpr size_t spinner_size = spinner_items.size();
  static constexpr bool spinner_power_of_two = is_power_of_two(spinner_size);
  static constexpr size_t spinner_mask = spinner_size == 0U ? 0U : (spinner_size - 1U);

  size_t line_count{0};
  size_t spinner_index{0};

public:
  unsigned int print_interval{Interval};

  void update() {
    if((++line_count & print_interval) != 0U) return;
    if(spinner_size == 0U) return;
    size_t const index = spinner_power_of_two
        ? (spinner_index++ & spinner_mask)
        : (spinner_index++ % spinner_size);
    std::cout << '\r' << spinner_items[index] << std::flush;
  }
};

} // namespace spinnerstorm
