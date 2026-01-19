#pragma once

#include <array>
#include <string_view>

namespace spinnerstorm::spinners {

inline constexpr auto ascii{           std::to_array<std::string_view>({"|", "/", "-", "\\"})};
inline constexpr auto quarter_arcs{    std::to_array<std::string_view>({"◜ ", " ◝", " ◞", "◟ "})};
inline constexpr auto arrows{          std::to_array<std::string_view>({"←", "↖", "↑", "↗", "→", "↘", "↓", "↙"})};
inline constexpr auto ramp_blocks{     std::to_array<std::string_view>({"▁", "▃", "▄", "▅", "▆", "▇", "█", "▇", "▆", "▅", "▄", "▃"})};
inline constexpr auto ramp_blocks_full{std::to_array<std::string_view>({"▁", "▂", "▃", "▄", "▅", "▆", "▇", "█", "▇", "▆", "▅", "▄", "▃", "▁"})};
inline constexpr auto ramp_vertical{   std::to_array<std::string_view>({"▉", "▊", "▋", "▌", "▍", "▎", "▏", "▎", "▍", "▌", "▋", "▊", "▉"})};
inline constexpr auto corners{         std::to_array<std::string_view>({"▖", "▘", "▝", "▗"})};
inline constexpr auto half_blocks{     std::to_array<std::string_view>({"▌", "▀", "▐", "▄"})};
inline constexpr auto box_arrows{      std::to_array<std::string_view>({"┤", "┘", "┴", "└", "├", "┌", "┬", "┐"})};
inline constexpr auto triangles{       std::to_array<std::string_view>({"◢", "◣", "◤", "◥"})};
inline constexpr auto quad_squares{    std::to_array<std::string_view>({"◰", "◳", "◲", "◱"})};
inline constexpr auto pie_quarters{    std::to_array<std::string_view>({"◴", "◷", "◶", "◵"})};
inline constexpr auto pie_halves{      std::to_array<std::string_view>({"◐", "◓", "◑", "◒"})};
inline constexpr auto bubbles{         std::to_array<std::string_view>({".", "o", "O", "@", "*"})};
inline constexpr auto dots_bounce{     std::to_array<std::string_view>({".", "o", "O", "o"})};
inline constexpr auto ticks{           std::to_array<std::string_view>({"·", "•", "●", "•"})};
inline constexpr auto twist{           std::to_array<std::string_view>({"╱", "╲"})};
inline constexpr auto blocks_light{    std::to_array<std::string_view>({"░", "▒", "▓", "█", "▓", "▒"})};
inline constexpr auto wave_comma{      std::to_array<std::string_view>({"`", "-", ".", ",", "_", ",", ".", "-"})};
inline constexpr auto wave_dot{        std::to_array<std::string_view>({"˙", "ॱ", "⋅", ".", "˳", ".", "⋅", "ॱ"})};
inline constexpr auto triangles_small{ std::to_array<std::string_view>({"▴", "▸", "▾", "▸"})};
inline constexpr auto squares_small{   std::to_array<std::string_view>({"□", "▣", "■", "▣"})};
inline constexpr auto split_bar{       std::to_array<std::string_view>({"⎺", "⎻", "⎼", "⎽"})};
inline constexpr auto waves{           std::to_array<std::string_view>({"~", "≈"})};
inline constexpr auto faces{           std::to_array<std::string_view>({"◡◡", "⊙⊙", "◠◠"})};
inline constexpr auto wave_braille{    std::to_array<std::string_view>({"⠁", "⠂", "⠄", "⠂"})};
inline constexpr auto slashes{         std::to_array<std::string_view>({"/", "//", "///", "//"})};
inline constexpr auto spark{           std::to_array<std::string_view>({"*", "✶", "✷", "✶"})};
inline constexpr auto sparkle{         std::to_array<std::string_view>({"·", "⋆", "✧", "✦", "✷", "✸", "✺", "✸", "✷", "✦", "✧", "⋆"})};
inline constexpr auto pinwheel{        std::to_array<std::string_view>({"╭", "╮", "╯", "╰"})};
inline constexpr auto dots_two{        std::to_array<std::string_view>({"· ", " ·"})};
inline constexpr auto diamonds{        std::to_array<std::string_view>({"◇", "◈", "◆", "◈"})};
inline constexpr auto braille{         std::to_array<std::string_view>({"⣾", "⣽", "⣻", "⢿", "⡿", "⣟", "⣯", "⣷"})};
inline constexpr auto braille_dots{    std::to_array<std::string_view>({"⠁", "⠂", "⠄", "⡀", "⢀", "⠠", "⠐", "⠈"})};
inline constexpr auto braille_full{    std::to_array<std::string_view>({"⡀", "⡁", "⡂", "⡃", "⡄", "⡅", "⡆", "⡇", "⡈", "⡉", "⡊", "⡋", "⡌", "⡍", "⡎", "⡏", "⡐", "⡑", "⡒", "⡓", "⡔", "⡕", "⡖", "⡗", "⡘", "⡙", "⡚", "⡛", "⡜", "⡝", "⡞", "⡟", "⡠", "⡡", "⡢", "⡣", "⡤", "⡥", "⡦", "⡧", "⡨", "⡩", "⡪", "⡫", "⡬", "⡭", "⡮", "⡯", "⡰", "⡱", "⡲", "⡳", "⡴", "⡵", "⡶", "⡷", "⡸", "⡹", "⡺", "⡻", "⡼", "⡽", "⡾", "⡿", "⢀", "⢁", "⢂", "⢃", "⢄", "⢅", "⢆", "⢇", "⢈", "⢉", "⢊", "⢋", "⢌", "⢍", "⢎", "⢏", "⢐", "⢑", "⢒", "⢓", "⢔", "⢕", "⢖", "⢗", "⢘", "⢙", "⢚", "⢛", "⢜", "⢝", "⢞", "⢟", "⢠", "⢡", "⢢", "⢣", "⢤", "⢥", "⢦", "⢧", "⢨", "⢩", "⢪", "⢫", "⢬", "⢭", "⢮", "⢯", "⢰", "⢱", "⢲", "⢳", "⢴", "⢵", "⢶", "⢷", "⢸", "⢹", "⢺", "⢻", "⢼", "⢽", "⢾", "⢿", "⣀", "⣁", "⣂", "⣃", "⣄", "⣅", "⣆", "⣇", "⣈", "⣉", "⣊", "⣋", "⣌", "⣍", "⣎", "⣏", "⣐", "⣑", "⣒", "⣓", "⣔", "⣕", "⣖", "⣗", "⣘", "⣙", "⣚", "⣛", "⣜", "⣝", "⣞", "⣟", "⣠", "⣡", "⣢", "⣣", "⣤", "⣥", "⣦", "⣧", "⣨", "⣩", "⣪", "⣫", "⣬", "⣭", "⣮", "⣯", "⣰", "⣱", "⣲", "⣳", "⣴", "⣵", "⣶", "⣷", "⣸", "⣹", "⣺", "⣻", "⣼", "⣽", "⣾", "⣿"})};

} // namespace spinnerstorm::spinners
