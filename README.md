# ft_printf

[![License](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

**ft_printf** is a custom implementation of the standard C library's `printf` function. It replicates the behavior of `printf`, providing formatted output capabilities, and adheres to the rigorous standards of the 42 Network curriculum.

## Table of Contents

- [About the Project](#about-the-project)
- [Features](#features)
- [Supported Conversions](#supported-conversions)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)

## About the Project

The `ft_printf` project is designed to provide a deeper understanding of variadic functions, formatted output, and C standard library internals. It replicates the core functionalities of `printf` and handles multiple format specifiers and edge cases while maintaining efficiency and accuracy.

## Features

- Handles standard output with a wide range of format specifiers.
- Supports precision, width, flags, and length modifiers.
- Efficient implementation with minimal memory usage.
- Handles edge cases to match the behavior of the original `printf`.

## Supported Conversions

The following format specifiers are supported:

| Specifier | Description                       |
|-----------|-----------------------------------|
| `%c`      | Prints a single character        |
| `%s`      | Prints a string                  |
| `%p`      | Prints a pointer address         |
| `%d`      | Prints a decimal (integer) number|
| `%i`      | Prints an integer                |
| `%u`      | Prints an unsigned decimal number|
| `%x`      | Prints a number in hexadecimal (lowercase) |
| `%X`      | Prints a number in hexadecimal (uppercase) |
| `%%`      | Prints a percent sign            |

## Getting Started

### Prerequisites

- A C compiler (GCC or Clang)
- GNU Make

### Installation

Clone the repository and compile the library:
```bash
git clone https://github.com/armhakob/ft_printf.git
cd ft_printf
make
