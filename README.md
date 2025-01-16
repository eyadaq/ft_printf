# ft_printf: A Custom Implementation of printf

**ft_printf** is a project from the 42 curriculum that challenges students to recreate the behavior of the standard `printf` function from the C standard library. This project focuses on understanding variadic functions, formatted output, and memory management.

## Overview

The goal of **ft_printf** is to implement a function that handles a subset of the functionality provided by the standard `printf`. It processes a format string and a variable number of arguments to produce formatted output.

### Supported Conversions

The project supports the following conversion specifiers:

- `%c` : Prints a single character.
- `%s` : Prints a null-terminated string.
- `%p` : Prints a pointer address in hexadecimal format (with `0x` prefix).
- `%d` : Prints a signed decimal integer.
- `%i` : Prints a signed decimal integer (same as `%d`).
- `%u` : Prints an unsigned decimal integer.
- `%x` : Prints an unsigned hexadecimal integer (lowercase).
- `%X` : Prints an unsigned hexadecimal integer (uppercase).
- `%%` : Prints a literal `%` character.

### Features

1. **Parsing the Format String**:
   - The format string is processed character by character.
   - Special sequences starting with `%` are identified as conversion specifiers.
   - Arguments are matched with their respective specifiers and formatted accordingly.

2. **Variadic Functions**:
   - Implements variadic function handling using `stdarg.h` macros:
     - `va_start`: Initializes the variadic argument list.
     - `va_arg`: Retrieves the next argument.
     - `va_end`: Cleans up the variadic argument list.

3. **Memory Management**:
   - Handles dynamic memory allocation for strings and pointers.
   - Ensures proper cleanup to avoid memory leaks.

4. **Base Conversion**:
   - Converts integers to strings in various bases (decimal, hexadecimal).
   - Handles both uppercase and lowercase hexadecimal formats.

5. **Output Handling**:
   - Uses `write` to send output to the standard output (file descriptor `1`).
   - Ensures correct character count for the return value.

## Implementation Highlights

1. **Helper Functions**:
   - `ft_putchar_fd`: Outputs a single character.
   - `ft_putstr_fd`: Outputs a string.
   - `ft_putnbr_fd`: Outputs an integer.
   - `ft_itoa`: Converts an integer to a string.
   - `ft_strlen`: Computes the length of a string.

2. **Pointer Formatting**:
   - Adds the `0x` prefix for hexadecimal pointers.
   - Converts the address value to lowercase hexadecimal format.

3. **Edge Case Handling**:
   - Correctly handles `NULL` strings by printing `(null)`.
   - Manages edge cases for integers (e.g., `INT_MIN` or `0`).

4. **Return Value**:
   - Returns the total number of characters printed, including all formatted content.

### Example Usage

```c
ft_printf("Hello, %s! Your score is %d.\n", "World", 42);
// Output: Hello, World! Your score is 42.
