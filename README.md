# Custom Printf Implementation

A custom implementation of the printf function in C, developed as part of the ALX Software Engineering program.

## Technology Signature

- **Language**: C
- **Standard**: C89/C90
- **Compilation**: gcc with specific flags (-Wall -Werror -Wextra -pedantic)
- **Environment**: Ubuntu 20.04 LTS

## Demonstrated Competencies

- Variadic functions in C
- Memory management
- String manipulation and parsing
- Function pointers implementation
- Modular code design
- Low-level I/O operations
- Structured documentation
- Test-driven development

## System Context

This project is a standalone implementation of the C standard library's printf function. It demonstrates understanding of:

- How formatted output functions work internally
- Handling various data types and conversion specifiers
- Implementing complex string processing logic

## Usage

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    _printf("Character: %c\n", 'A');
    _printf("Number: %d\n", 42);
    _printf("Binary: %b\n", 15);
    _printf("Hexadecimal: %x\n", 255);
    return (0);
}
```

## Supported Format Specifiers

- `%c`: Character
- `%s`: String
- `%d`: Decimal (signed integer)
- `%i`: Integer
- `%b`: Binary
- `%u`: Unsigned decimal
- `%o`: Octal
- `%x`: Hexadecimal (lowercase)
- `%X`: Hexadecimal (uppercase)
- `%S`: Non-printable ASCII characters
- `%p`: Pointer address

## Project Structure

- `_printf.c`: Main printf implementation
- `_putchar.c`: Character output function
- `print_char.c`: Character and string handling
- `print_dec.c`: Decimal and integer handling
- `print_base.c`: Various base number system handling
- `print_printf.c`: Special printf format handling
- `main.h`: Header file with function prototypes

## Authors

- Student(s) at ALX Software Engineering Program
