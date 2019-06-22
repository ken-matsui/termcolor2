#ifndef TERMCOLOR2_ALIAS_HPP
#define TERMCOLOR2_ALIAS_HPP

#include "./string.hpp"

namespace termcolor2 {
    template <std::size_t N>
    using string = basic_string<char, N>;

#ifndef _MSC_VER
    template <std::size_t N>
    using wstring = basic_string<wchar_t, N>;

    template <std::size_t N>
    using u16string = basic_string<char16_t, N>;

    template <std::size_t N>
    using u32string = basic_string<char32_t, N>;
#endif
} // end namespace termcolor2

#endif	// !TERMCOLOR2_ALIAS_HPP
