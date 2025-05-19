# 🖨️ ft_printf

## 📌 Table of Contents
- [Introduction](#introduction)
- [Project Objectives](#project-objectives)
- [Supported Conversions](#supported-conversions)
- [Flags, Width, Precision](#flags-width-precision)
- [Compilation](#compilation)
- [Usage](#usage)
- [Examples](#examples)
- [Implementation Overview](#implementation-overview)
- [Resources](#resources)

---

## 🧩 Introduction

**ft_printf** is a project that recreates the standard C library function `printf`.  
You will implement a function that handles formatted output with support for a subset of conversion specifiers and flags.

---

## 🎯 Project Objectives

- Understand variadic functions (`stdarg.h`).
- Parse format strings.
- Handle different data types and flags.
- Manage output formatting, padding, and precision.
- Avoid using the standard `printf` family.

---

## 🔤 Supported Conversions

- `%c` — character
- `%s` — string
- `%p` — pointer (hexadecimal)
- `%d` / `%i` — signed decimal integer
- `%u` — unsigned decimal integer
- `%x` / `%X` — unsigned hexadecimal (lowercase / uppercase)
- `%%` — literal percent sign

---

## 🚩 Flags, Width, Precision

You must support:

- Flags: `-` (left-justify), `0` (zero-padding)
- Width: minimum field width (number or `*`)
- Precision: `.number` or `.*`
- Handle edge cases such as NULL strings and zero values with precision 0.

---

## 🛠 Compilation

```bash
make
````

Targets:

```bash
make clean    # Remove object files
make fclean   # Remove objects and executable
make re       # Rebuild everything
```

---

## 🚀 Usage

Use your function as a replacement for `printf`:

```c
int ret = ft_printf("Hello %s! Number: %d\n", "World", 42);
```

Returns the number of characters printed.

---

## 💡 Examples

```c
ft_printf("Char: %c\n", 'A');
ft_printf("String: %10s\n", "Hello");
ft_printf("Pointer: %p\n", ptr);
ft_printf("Decimal: %d\n", -123);
ft_printf("Unsigned: %u\n", 123);
ft_printf("Hex lower: %x\n", 255);
ft_printf("Hex upper: %X\n", 255);
ft_printf("Percent: %%\n");
```

---

## 🧱 Implementation Overview

* Parsing format strings with a state machine.
* Handling variadic arguments with `va_list`.
* Converting numbers to strings in decimal and hexadecimal.
* Applying width, precision, and flags during output.

---

## 📚 Resources

* `man 3 printf`
* `man 3 va_start`
* 42 ft\_printf subject and examples
* Online tutorials on variadic functions and format parsing

---

> 🖨️ Project developed at 42 to deepen understanding of C variadic functions and string formatting.
