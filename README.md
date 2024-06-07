# :printer: Prinft 

<div align=center>

  ![badge](https://raw.githubusercontent.com/angelamcosta/angelamcosta/main/42_badges/ft_printfe.png)

  <img alt="GitHub Language Count" src="https://img.shields.io/github/languages/count/angelamcosta/printf" /> <img alt="GitHub Top Language" src="https://img.shields.io/github/languages/top/angelamcosta/printf" /> <img alt="GitHub Contributors" src="https://img.shields.io/github/contributors/angelamcosta/printf" /> <img alt="GitHub Last Commit" src="https://img.shields.io/github/last-commit/angelamcosta/printf" /> <a href="https://wakatime.com/badge/user/0c29d5b3-c30b-4e1a-ad07-2da3bd4f7e05/project/dbfed7e7-16e9-4b96-ac50-8046cf85956b"><img src="https://wakatime.com/badge/user/0c29d5b3-c30b-4e1a-ad07-2da3bd4f7e05/project/dbfed7e7-16e9-4b96-ac50-8046cf85956b.svg" alt="wakatime"></a>
</div>

libftprintf.a is a custom library that provides a function called ft_printf, which mimics the behavior of the standard printf function from the C library. This library allows you to format and print output to the standard output stream, similar to printf.

## ✨ Features
- Supports various format specifiers, including c, s, p, d, i, u, x, X, and %
- Handles basic conversions and formatting options
- Allows printing of characters, strings, pointers, decimal and integer numbers, and hexadecimal numbers
- Can handle both lowercase and uppercase hexadecimal formatting
- Provides a convenient way to output formatted text

## 🚀 Usage
To use the ft_printf function in your C program, follow these steps:

1. Include the "libftprintf.h" header file in your source code.
2. Compile your program with the libftprintf.a library using the provided Makefile.
3. Call ft_printf function with a format string and any additional arguments.

Here's an example of how to use ft_printf:

```c
#include "libftprintf.h"

int main(void)
{
	ft_printf("Hello, %s!\n", "world");
	ft_printf("The answer is %d.\n", 42);

	return (0);
}
```

In the above example, ft_printf is used to print a string and an integer value. The format specifier `%s` is used for the string, and `%d` is used for the integer.

## ⚙️ Compilation
To compile your program with the libftprintf.a library, use the provided Makefile. The Makefile includes the following commands:

- `make all`: Compiles your program and creates the libftprintf.a library.
- `make clean`: Removes object files generated during compilation.
- `make fclean`: Removes the libftprintf.a library and object files.
- `make re`: Performs a clean build by running `make fclean` followed by `make all`.

**Note:** This library is for educational purposes and serves as a learning experience in re-implementing a simplified version of the printf function. It may not cover all the advanced features and edge cases present in the standard printf function.
