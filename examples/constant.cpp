#include <cstdlib>
#include <iostream>
#include <termcolor2/termcolor2.hpp>

int main() {
    constexpr auto red_str = termcolor2::to_red("Hello, ") + "Colorful World!";
    constexpr std::size_t red_str_size = termcolor2::red<>.size() + 7 + termcolor2::reset<>.size() + 15;
    static_assert(red_str.size() == red_str_size, "");
    std::cout << red_str << std::endl;
}

