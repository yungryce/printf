<p align="center">
  <img src="https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=white" alt="C">
  <img src="https://img.shields.io/badge/Status-Complete-brightgreen?style=for-the-badge" alt="Status">
  <img src="https://img.shields.io/badge/Level-Intermediate-orange?style=for-the-badge" alt="Level">
</p>

<div align="center">
  <h1>🖨️ Custom Printf Implementation</h1>
  <p><em>A comprehensive recreation of the C standard library printf function with advanced format specifier support</em></p>
</div>

---

## 📋 Table of Contents
- [📖 Overview](#-overview)
- [🎯 Learning Objectives](#-learning-objectives)
- [🛠️ Tech Stack](#️-tech-stack)
- [📁 Project Structure](#-project-structure)
- [🚀 Getting Started](#-getting-started)
- [💡 Usage](#-usage)
- [🏆 Key Features](#-key-features)
- [📊 Complexity Analysis](#-complexity-analysis)
- [📚 Resources](#-resources)
- [👥 Contributors](#-contributors)

## 📖 Overview

This project is a comprehensive custom implementation of the C standard library's `printf` function, developed as part of the ALX Software Engineering curriculum. The implementation demonstrates advanced C programming concepts including variadic functions, format string parsing, modular code architecture, and efficient memory management.

The custom `_printf` function supports multiple format specifiers and provides insight into how standard library functions work internally. This project emphasizes understanding low-level string processing, type handling, and the implementation of complex formatting algorithms.

## 🎯 Learning Objectives

By completing this project, students will master:

- **Variadic Function Implementation**: Understanding and implementing functions that accept variable numbers of arguments
- **Format String Processing**: Parsing and interpreting printf-style format specifications
- **Function Pointer Usage**: Creating dispatch tables for modular format handler selection
- **Base Conversion Algorithms**: Converting numbers between decimal, binary, octal, and hexadecimal representations
- **Memory Management**: Efficient buffer handling and memory allocation strategies
- **Modular Code Design**: Organizing code into reusable, maintainable components
- **Standard Library Recreation**: Understanding how built-in C functions work internally

## 🛠️ Tech Stack

**Core Technologies:**
- **C Programming Language**: Primary implementation language following C89/C90 standards
- **Standard C Library**: Minimal usage for core functionality like `va_list` macros

**Development Tools:**
- **GCC Compiler**: With strict flags (-Wall -Werror -Wextra -pedantic)
- **Make**: Build automation and compilation management
- **Valgrind**: Memory leak detection and debugging
- **GDB**: Debugging and code analysis

**Programming Paradigms:**
- Procedural programming with modular design
- Function pointer-based dispatch systems
- Recursive algorithm implementation

## 📁 Project Structure

```
printf/
├── 📄 _printf.c           # Main printf implementation and format dispatcher
├── 📄 _putchar.c          # Character output utility function
├── 📄 main.h              # Header file with function prototypes and structures
├── 📄 print_char.c        # Character and string format handlers
├── 📄 print_dec.c         # Decimal and integer number handlers
├── 📄 print_base.c        # Base conversion algorithms (binary, octal, hex)
├── 📄 print_printf.c      # Special format handlers (ASCII-hex, pointers)
├── 📄 main.c              # Test file and usage examples
├── 📁 TEST/               # Comprehensive test suite
├── 📁 checker/            # Automated checking tools
├── 📁 tester/             # Additional testing utilities
├── 📄 README.md           # Project documentation
├── 📄 AUTHORS             # Contributors and authorship information
└── 📄 LICENSE.txt         # Educational license

Key Implementation Files:
├── Core Engine: _printf.c (format string parsing and dispatch)
├── Output Layer: _putchar.c (character-level output)
├── Format Handlers: print_*.c (specialized conversion functions)
└── Interface: main.h (structures and function declarations)
```

## 🚀 Getting Started

### Prerequisites
- GCC compiler (version 4.8 or later)
- Ubuntu 20.04 LTS or compatible Linux distribution
- Make utility for build automation

### Installation & Compilation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/yungryce/alx-low_level_programming.git
   cd printf
   ```

2. **Compile the project:**
   ```bash
   gcc -Wall -Werror -Wextra -pedantic *.c -o printf_test
   ```

3. **Run tests:**
   ```bash
   ./printf_test
   ```

### Development Compilation Flags
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf_test
```

## 💡 Usage

### Basic Implementation Example

```c
#include "main.h"

int main(void)
{
    int count;
    
    /* Basic string and character output */
    _printf("Hello, %s!\n", "World");
    _printf("Character: %c\n", 'A');
    
    /* Numeric format specifiers */
    _printf("Decimal: %d\n", 42);
    _printf("Integer: %i\n", -123);
    _printf("Unsigned: %u\n", 3000000000U);
    
    /* Base conversion demonstrations */
    _printf("Binary: %b\n", 15);          // Output: 1111
    _printf("Octal: %o\n", 64);           // Output: 100
    _printf("Hex (lower): %x\n", 255);    // Output: ff
    _printf("Hex (upper): %X\n", 255);    // Output: FF
    
    /* Advanced format specifiers */
    _printf("Pointer: %p\n", &count);
    _printf("Special ASCII: %S\n", "Hello\nWorld");
    
    return (0);
}
```

### Advanced Usage Patterns

```c
/* Return value usage */
int printed_chars = _printf("Formatted: %d %s\n", 42, "test");
_printf("Characters printed: %d\n", printed_chars);

/* Multiple format specifiers */
_printf("Mixed: %c %s %d %x\n", 'A', "test", 123, 255);

/* Edge cases and special values */
_printf("Zero: %d\n", 0);
_printf("Negative: %d\n", -2147483648);
_printf("Null string: %s\n", NULL);
```

## 🏆 Key Features

### ✨ Format Specifier Support
- **%c**: Single character output
- **%s**: String output with null-termination handling
- **%d, %i**: Signed decimal integer conversion
- **%u**: Unsigned decimal integer conversion
- **%o**: Octal number conversion
- **%x, %X**: Hexadecimal conversion (lowercase/uppercase)
- **%b**: Binary number conversion (custom implementation)
- **%S**: String with non-printable character escaping
- **%p**: Pointer address formatting

### 🚀 Advanced Capabilities
- **Variadic Function Architecture**: Handles unlimited format arguments
- **Function Pointer Dispatch**: Efficient format handler selection
- **Memory-Safe Operations**: Prevents buffer overflows and memory leaks
- **Recursive Number Processing**: Efficient digit extraction and conversion
- **Cross-Platform Compatibility**: Works on various Unix-like systems
- **Error Handling**: Graceful handling of invalid inputs and edge cases

### 🎯 Performance Optimizations
- **Direct Character Output**: Minimal buffering for efficiency
- **Recursive Algorithms**: Stack-efficient number processing
- **Modular Design**: Separate handlers prevent code duplication
- **Compile-Time Optimization**: Compatible with -O2 and -O3 flags

## 📊 Complexity Analysis

| Component | Time Complexity | Space Complexity | Description |
|-----------|----------------|------------------|-------------|
| Format Parsing | O(n) | O(1) | Linear scan of format string |
| Integer Conversion | O(log n) | O(log n) | Recursive digit extraction |
| String Output | O(n) | O(1) | Character-by-character output |
| Base Conversion | O(log_b n) | O(log_b n) | Base-specific digit conversion |
| Function Dispatch | O(1) | O(1) | Direct table lookup |

### Performance Characteristics
- **Memory Usage**: Minimal heap allocation, stack-based processing
- **Output Speed**: Direct system call integration via `_putchar`
- **Scalability**: Handles format strings up to available memory limits
- **Efficiency**: No unnecessary string copying or intermediate buffers

## 📚 Resources

### 📖 Essential Reading
- [**C Programming Language (K&R)**](https://en.wikipedia.org/wiki/The_C_Programming_Language) - Fundamental C concepts and printf implementation details
- [**GNU C Library Manual**](https://www.gnu.org/software/libc/manual/) - Standard library function specifications
- [**Variadic Functions in C**](https://en.cppreference.com/w/c/variadic) - Understanding va_list and argument processing

### 🎓 Educational Resources
- [**ALX Software Engineering Program**](https://www.alxafrica.com/) - Comprehensive curriculum and project guidelines
- [**C Standard Library Implementation**](https://en.wikipedia.org/wiki/C_standard_library) - Understanding standard function internals
- [**Function Pointers in C**](https://www.geeksforgeeks.org/function-pointer-in-c/) - Advanced pointer usage patterns

### 🔧 Development Tools
- [**GCC Compiler Documentation**](https://gcc.gnu.org/onlinedocs/) - Compilation flags and optimization techniques
- [**Valgrind Memory Debugger**](https://valgrind.org/) - Memory leak detection and debugging
- [**GDB Debugger Guide**](https://www.gnu.org/software/gdb/) - Debugging techniques and tools

## 👥 Contributors

This project was developed as part of the ALX Software Engineering curriculum with focus on advanced C programming concepts and standard library implementation.

**Primary Developer:** [Chigbu Joshua](https://github.com/yungryce)
- Email: chigbujoshua@yahoo.com
- Role: ALX Software Engineering Student
- Focus: Systems programming and algorithm implementation

For detailed contributor information, see [AUTHORS](./AUTHORS).

---

<div align="center">
  <p><strong>🎓 ALX Software Engineering Program</strong></p>
  <p><em>Building the next generation of software engineers</em></p>
</div>
