# termcolor2 [![Build Status](https://travis-ci.com/matken11235/termcolor2.svg?branch=master)](https://travis-ci.com/matken11235/termcolor2)
Termcolor2 is a header-only constexpr cross-platform C++ library for terminal colors.

Support not less than C++14.

## Installation

To install `termcolor2`, add it to the dependency list of `poac.yml`:

```yaml
dependencies:
  matken11235/termcolor2: ">=0.1.0 and <1.0.0"
```

After that, execute `poac install` command to install `termcolor2`.


## How to use?

It's very easy to use. The typical `Hello World` application is below:

```cpp
#include <iostream>
#include <termcolor2/termcolor2.hpp>

int main() {
    std::cout << termcolor2::red << "Hello, Colorful World!" << std::endl;
}
```

In the above method, the subsequent characters are also print with red too.
If you want to specify the printing range with red, do as follows.

```cpp
#include <iostream>
#include <termcolor2/termcolor2.hpp>

int main() {
    std::cout << termcolor2::red << "Hello, Colorful World!" << std::endl;
    std::cout << termcolor2::reset << "Here I'm!" << std::endl;
}
```

It is troublesome to specify the printing range every time.
By using `to_{color}` function, only the passed string will color red.

```cpp
#include <iostream>
#include <termcolor2/termcolor2.hpp>

int main() {
    std::cout << termcolor2::to_red("Hello, Colorful World!") << std::endl;
    std::cout << "Here I'm!" << std::endl;
}
```

### Constant Expression

All variables and functions shown so far is a constant expression.
Therefore, you can manipulate string at compile time.

```cpp
#include <cstdlib>
#include <iostream>
#include <termcolor2/termcolor2.hpp>

int main() {
    constexpr auto red_str = termcolor2::to_red("Hello, ") + "Colorful World!";
    constexpr std::size_t red_str_size = termcolor2::red.size() + 7 + termcolor2::reset.size() + 15;
    static_assert(red_str.size() == red_str_size, "");
    std::cout << red_str << std::endl;
}
```

In order to realize a constant expression, I have implemented own basic_string.
It can convert to `std::basic_string` by the `to_string()` method.
Please note that it is not a constant expression at that timing.

```cpp
#include <iostream>
#include <termcolor2/termcolor2.hpp>

int main() {
    auto red_str = termcolor2::to_red("Hello, Colorful World!").to_string(); // std::string
    std::cout << red_str << std::endl;
}
```


### User-defined string literals

You can also use user-defined string literals.
There is no particular difference with `to_{color}` function, but it does not become a constant expression unless the macro described later is enabled.
Therefore, `std::basic_string` is returned instead of `termcolor2::basic_string`.

```cpp
#include <iostream>
#include <termcolor2/termcolor2.hpp>

int main() {
    using namespace termcolor2::color_literals;
    std::cout << "Hello, Colorful World!"_red /* std::string */ << std::endl;
}
```

#### Constant Expression (exclude MSVC)

In GCC and Clang (include Apple Clang), you can use user-defined string literals in constant expression.

```cpp
#include <iostream>
#define TERMCOLOR2_USE_GNU_STRING_LITERAL_OPERATOR_TEMPLATE
#include <termcolor2/termcolor2.hpp>

int main() {
    using namespace termcolor2::color_literals;

    constexpr auto red_str = "Hello, Colorful World!"_red;
    constexpr std::size_t red_str_size = termcolor2::red.size() + 22 + termcolor2::reset.size();
    static_assert(red_str.size() == red_str_size, "");
    std::cout << red_str << std::endl;
}
```

**Please note that using GNU extensions is not standard.**

In MSVC, as described [here](https://developercommunity.visualstudio.com/content/problem/5635/the-flowing-code-used-to-compile-in-vs15-but-not-i.html), user-defined string literal operator templates is not implemented, so defining TERMCOLOR2_USE_GNU_STRING_LITERAL_OPERATOR_TEMPLATE is ignored.

If you compile, you will get the following warning:

```
termcolor2/config.hpp:39:6: warning:
      "gnu-string-literal-operator-template is enabled." "You will see a warning associated with it." "If you want to
      hide warning, please pass -Wno-gnu-string-literal-operator-template to compiler option." [-W#warnings]
#    warning "gnu-string-literal-operator-template is enabled." \
     ^

termcolor2/literals.hpp:14:20: warning:
      string literal operator templates are a GNU extension [-Wgnu-string-literal-operator-template]
    constexpr auto operator "" _red() noexcept
                   ^

.
.
.
```

If you want to hide the warning, define `TERMCOLOR2_NO_WARNING` macro and pass `-Wno-gnu-string-literal-operator-template` as a compile option.

It is better to use it when you do not need to be a constant expression, such as streaming to stream immediately, without defining `TERMCOLOR2_USE_GNU_STRING_LITERAL_OPERATOR_TEMPLATE`.
Also, if you are considering constant expression color specification in MSVC, you need to use the `to_{color}` function.


## What manipulators are supported?

The manipulators are divided into four groups:

* *foreground*, which changes text color;
* *background*, which changes text background color;
* *attributes*, which changes some text style (bold, underline, etc);
* *control*, which changes termcolor's behaviour.


### Foreground manipulators

1. `termcolor2::grey`
1. `termcolor2::red`
1. `termcolor2::green`
1. `termcolor2::yellow`
1. `termcolor2::blue`
1. `termcolor2::magenta`
1. `termcolor2::cyan`
1. `termcolor2::white`


### Background manipulators

1. `termcolor2::on_grey`
1. `termcolor2::on_red`
1. `termcolor2::on_green`
1. `termcolor2::on_yellow`
1. `termcolor2::on_blue`
1. `termcolor2::on_magenta`
1. `termcolor2::on_cyan`
1. `termcolor2::on_white`


### Attribute manipulators

1. `termcolor2::bold`
1. `termcolor2::dark`
1. `termcolor2::underline`
1. `termcolor2::blink`
1. `termcolor2::reverse`
1. `termcolor2::concealed`


### Control manipulators

Comming soon...

