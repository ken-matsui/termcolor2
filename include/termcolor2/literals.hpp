#ifndef TERMCOLOR2_LITERALS_HPP
#define TERMCOLOR2_LITERALS_HPP

#include <cstddef> // std::size_t
#include <string> // std::basic_string

#include "./to_color.hpp"

namespace termcolor2 {
inline namespace literals {
inline namespace color_literals {
#ifdef TERMCOLOR2_USE_GNU_STRING_LITERAL_OPERATOR_TEMPLATE
    template <typename CharT, CharT... Str>
    constexpr auto operator "" _red() noexcept
    {
        return to_red<CharT, sizeof...(Str), Str...>();
    }
#elif defined(_MSC_VER)
    inline std::basic_string<char>
    operator "" _red(const char* str, std::size_t len) noexcept
    {
        return to_red(str, len);
    }
#else
    inline std::basic_string<char>
    operator "" _red(const char* str, std::size_t len) noexcept
    {
        return to_red(str, len);
    }
    inline std::basic_string<wchar_t>
    operator "" _red(const wchar_t* str, std::size_t len) noexcept
    {
        return to_red(str, len);
    }
    inline std::basic_string<char16_t>
    operator "" _red(const char16_t* str, std::size_t len) noexcept
    {
        return to_red(str, len);
    }
    inline std::basic_string<char32_t>
    operator "" _red(const char32_t* str, std::size_t len) noexcept
    {
        return to_red(str, len);
    }
#endif

#ifdef TERMCOLOR2_USE_GNU_STRING_LITERAL_OPERATOR_TEMPLATE
    template <typename CharT, CharT... Str>
    constexpr auto operator "" _green() noexcept
    {
        return to_green<CharT, sizeof...(Str), Str...>();
    }
#elif defined(_MSC_VER)
    inline std::basic_string<char>
    operator "" _green(const char* str, std::size_t len) noexcept
    {
        return to_green(str, len);
    }
#else
    inline std::basic_string<char>
    operator "" _green(const char* str, std::size_t len) noexcept
    {
        return to_green(str, len);
    }
    inline std::basic_string<wchar_t>
    operator "" _green(const wchar_t* str, std::size_t len) noexcept
    {
        return to_green(str, len);
    }
    inline std::basic_string<char16_t>
    operator "" _green(const char16_t* str, std::size_t len) noexcept
    {
        return to_green(str, len);
    }
    inline std::basic_string<char32_t>
    operator "" _green(const char32_t* str, std::size_t len) noexcept
    {
        return to_green(str, len);
    }
#endif


#ifdef TERMCOLOR2_USE_GNU_STRING_LITERAL_OPERATOR_TEMPLATE
    template <typename CharT, CharT... Str>
    constexpr auto operator "" _yellow() noexcept
    {
        return to_yellow<CharT, sizeof...(Str), Str...>();
    }
#elif defined(_MSC_VER)
    inline std::basic_string<char>
    operator "" _yellow(const char* str, std::size_t len) noexcept
    {
        return to_yellow(str, len);
    }
#else
    inline std::basic_string<char>
    operator "" _yellow(const char* str, std::size_t len) noexcept
    {
        return to_yellow(str, len);
    }
    inline std::basic_string<wchar_t>
    operator "" _yellow(const wchar_t* str, std::size_t len) noexcept
    {
        return to_yellow(str, len);
    }
    inline std::basic_string<char16_t>
    operator "" _yellow(const char16_t* str, std::size_t len) noexcept
    {
        return to_yellow(str, len);
    }
    inline std::basic_string<char32_t>
    operator "" _yellow(const char32_t* str, std::size_t len) noexcept
    {
        return to_yellow(str, len);
    }
#endif


#ifdef TERMCOLOR2_USE_GNU_STRING_LITERAL_OPERATOR_TEMPLATE
    template <typename CharT, CharT... Str>
    constexpr auto operator "" _blue() noexcept
    {
        return to_blue<CharT, sizeof...(Str), Str...>();
    }
#elif defined(_MSC_VER)
    inline std::basic_string<char>
    operator "" _blue(const char* str, std::size_t len) noexcept
    {
        return to_blue(str, len);
    }
#else
    inline std::basic_string<char>
    operator "" _blue(const char* str, std::size_t len) noexcept
    {
        return to_blue(str, len);
    }
    inline std::basic_string<wchar_t>
    operator "" _blue(const wchar_t* str, std::size_t len) noexcept
    {
        return to_blue(str, len);
    }
    inline std::basic_string<char16_t>
    operator "" _blue(const char16_t* str, std::size_t len) noexcept
    {
        return to_blue(str, len);
    }
    inline std::basic_string<char32_t>
    operator "" _blue(const char32_t* str, std::size_t len) noexcept
    {
        return to_blue(str, len);
    }
#endif


#ifdef TERMCOLOR2_USE_GNU_STRING_LITERAL_OPERATOR_TEMPLATE
    template <typename CharT, CharT... Str>
    constexpr auto operator "" _pink() noexcept
    {
        return to_pink<CharT, sizeof...(Str), Str...>();
    }
#elif defined(_MSC_VER)
    inline std::basic_string<char>
    operator "" _pink(const char* str, std::size_t len) noexcept
    {
        return to_pink(str, len);
    }
#else
    inline std::basic_string<char>
    operator "" _pink(const char* str, std::size_t len) noexcept
    {
        return to_pink(str, len);
    }
    inline std::basic_string<wchar_t>
    operator "" _pink(const wchar_t* str, std::size_t len) noexcept
    {
        return to_pink(str, len);
    }
    inline std::basic_string<char16_t>
    operator "" _pink(const char16_t* str, std::size_t len) noexcept
    {
        return to_pink(str, len);
    }
    inline std::basic_string<char32_t>
    operator "" _pink(const char32_t* str, std::size_t len) noexcept
    {
        return to_pink(str, len);
    }
#endif


#ifdef TERMCOLOR2_USE_GNU_STRING_LITERAL_OPERATOR_TEMPLATE
    template <typename CharT, CharT... Str>
    constexpr auto operator "" _gray() noexcept
    {
        return to_gray<CharT, sizeof...(Str), Str...>();
    }
#elif defined(_MSC_VER)
    inline std::basic_string<char>
    operator "" _gray(const char* str, std::size_t len) noexcept
    {
        return to_gray(str, len);
    }
#else
    inline std::basic_string<char>
    operator "" _gray(const char* str, std::size_t len) noexcept
    {
        return to_gray(str, len);
    }
    inline std::basic_string<wchar_t>
    operator "" _gray(const wchar_t* str, std::size_t len) noexcept
    {
        return to_gray(str, len);
    }
    inline std::basic_string<char16_t>
    operator "" _gray(const char16_t* str, std::size_t len) noexcept
    {
        return to_gray(str, len);
    }
    inline std::basic_string<char32_t>
    operator "" _gray(const char32_t* str, std::size_t len) noexcept
    {
        return to_gray(str, len);
    }
#endif


#ifdef TERMCOLOR2_USE_GNU_STRING_LITERAL_OPERATOR_TEMPLATE
    template <typename CharT, CharT... Str>
    constexpr auto operator "" _bold() noexcept
    {
        return to_bold<CharT, sizeof...(Str), Str...>();
    }
#elif defined(_MSC_VER)
    inline std::basic_string<char>
    operator "" _bold(const char* str, std::size_t len) noexcept
    {
        return to_bold(str, len);
    }
#else
    inline std::basic_string<char>
    operator "" _bold(const char* str, std::size_t len) noexcept
    {
        return to_bold(str, len);
    }
    inline std::basic_string<wchar_t>
    operator "" _bold(const wchar_t* str, std::size_t len) noexcept
    {
        return to_bold(str, len);
    }
    inline std::basic_string<char16_t>
    operator "" _bold(const char16_t* str, std::size_t len) noexcept
    {
        return to_bold(str, len);
    }
    inline std::basic_string<char32_t>
    operator "" _bold(const char32_t* str, std::size_t len) noexcept
    {
        return to_bold(str, len);
    }
#endif


#ifdef TERMCOLOR2_USE_GNU_STRING_LITERAL_OPERATOR_TEMPLATE
    template <typename CharT, CharT... Str>
    constexpr auto operator "" _underline() noexcept
    {
        return to_underline<CharT, sizeof...(Str), Str...>();
    }
#elif defined(_MSC_VER)
    inline std::basic_string<char>
    operator "" _underline(const char* str, std::size_t len) noexcept
    {
        return to_underline(str, len);
    }
#else
    inline std::basic_string<char>
    operator "" _underline(const char* str, std::size_t len) noexcept
    {
        return to_underline(str, len);
    }
    inline std::basic_string<wchar_t>
    operator "" _underline(const wchar_t* str, std::size_t len) noexcept
    {
        return to_underline(str, len);
    }
    inline std::basic_string<char16_t>
    operator "" _underline(const char16_t* str, std::size_t len) noexcept
    {
        return to_underline(str, len);
    }
    inline std::basic_string<char32_t>
    operator "" _underline(const char32_t* str, std::size_t len) noexcept
    {
        return to_underline(str, len);
    }
#endif
} // end namespace color_literals
} // end namespace literals
} // end namespace termcolor2

#endif	// !TERMCOLOR2_LITERALS_HPP
