#include <iostream>
#include <termcolor2/termcolor2.hpp>

int main() {
    std::cout
        << termcolor2::yellow<> << "Warm welcome to "
        << termcolor2::blue<> << termcolor2::underline<> << "TERMCOLOR"
        << termcolor2::reset<> << std::endl;
}

