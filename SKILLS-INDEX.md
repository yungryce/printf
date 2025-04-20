# Printf Project Skills Index

This document maps specific technical skills to their implementations within this project.

## Core C Programming Skills

### Variadic Functions
- **Implementation**: `_printf.c`
- **Key Functions**: `_printf()`
- **Concepts Demonstrated**: 
  - Using va_list, va_start, va_arg, va_end macros
  - Dynamic argument handling
  - Type-safe argument processing

### Function Pointers
- **Implementation**: `_printf.c`, `main.h`
- **Key Structures**: `arr_printf` struct
- **Concepts Demonstrated**:
  - Function pointer arrays
  - Function dispatch tables
  - Runtime function selection

### String Manipulation
- **Implementation**: `print_char.c`, `print_printf.c`
- **Key Functions**: `print_string()`, `print_ascii_hex()`
- **Concepts Demonstrated**:
  - Character-by-character processing
  - String traversal
  - ASCII conversion

### Base Conversion Algorithms
- **Implementation**: `print_base.c`
- **Key Functions**: 
  - `print_number_base()`
  - `print_number_base_upper()`
  - `print_binary()`, `print_octal()`, `print_hex_lower()`, `print_hex_upper()`
- **Concepts Demonstrated**:
  - Decimal to binary/octal/hex conversion
  - Recursive number processing
  - Base arithmetic

### Integer Handling
- **Implementation**: `print_dec.c`
- **Key Functions**: `print_number()`, `print_int()`, `print_decimal()`
- **Concepts Demonstrated**:
  - Recursive digit extraction
  - Sign handling
  - Edge case management (0, negative numbers)

### Memory Management
- **Implementation**: All files
- **Concepts Demonstrated**:
  - Stack-based variable usage
  - Proper argument passing
  - Memory cleanup (va_end)

### Low-Level I/O
- **Implementation**: `_putchar.c`
- **Key Functions**: `_putchar()`
- **Concepts Demonstrated**:
  - System call usage (write)
  - File descriptor operations
  - Character-by-character output

## Software Design Skills

### Modular Programming
- **Implementation**: Project structure (multiple .c files)
- **Concepts Demonstrated**:
  - Single Responsibility Principle
  - Function specialization
  - Code organization

### Interface Design
- **Implementation**: `main.h`
- **Concepts Demonstrated**:
  - Function prototyping
  - Structure definition
  - Header organization
  - Include guards

### Error Handling
- **Implementation**: `_printf.c`
- **Concepts Demonstrated**:
  - Return value signaling
  - Edge case detection
  - Graceful failure

## Advanced C Concepts

### Pointer Manipulation
- **Implementation**: `print_base.c`, `print_printf.c`
- **Key Functions**: `print_pointer()`, `print_ascii_hex()`
- **Concepts Demonstrated**:
  - Pointer address formatting
  - Void pointer handling
  - Type casting

### Custom Format Specifiers
- **Implementation**: All handler files
- **Concepts Demonstrated**:
  - Format string parsing
  - Custom format implementation
  - Extension of standard functionality

### Program Flow Control
- **Implementation**: `_printf.c`
- **Concepts Demonstrated**:
  - Dynamic dispatch
  - Loop-based string processing
  - Conditional execution

## Documentation Skills

### Code Documentation
- **Implementation**: All files
- **Concepts Demonstrated**:
  - Function header comments
  - Parameter documentation
  - Return value specification
  - Clear variable naming

### API Documentation
- **Implementation**: README.md
- **Concepts Demonstrated**:
  - Usage examples
  - Function interface description
  - Supported format specification
