# Printf Project Manifest

## Project Overview

This project is a recreation of the `printf` function found in the C standard library. It implements a subset of the functionality of the original `printf`, focusing on the most common format specifiers.

## Educational Context

- **Program**: ALX Software Engineering
- **Project Type**: Core C Programming
- **Difficulty**: Intermediate
- **Prerequisites**: 
  - Basic C syntax
  - Functions and pointers
  - Memory management
  - String manipulation

## Implementation Details

### Core Components

1. **Main Printf Function**
   - Parses format string
   - Handles conversion specifiers
   - Manages variable arguments
   - Controls output flow

2. **Format Handlers**
   - Character and string handling
   - Integer and decimal number formatting
   - Various base conversions (binary, octal, hex)
   - Special format handling (non-printable chars, pointers)

3. **Support Functions**
   - Character output
   - Base conversion utilities
   - Number printing utilities

### Format Specifiers

| Specifier | Data Type | Description |
|-----------|-----------|-------------|
| %c | char | Single character |
| %s | char* | String of characters |
| %d | int | Signed decimal integer |
| %i | int | Signed decimal integer |
| %u | unsigned int | Unsigned decimal integer |
| %b | unsigned int | Binary representation |
| %o | unsigned int | Octal representation |
| %x | unsigned int | Hexadecimal representation (lowercase) |
| %X | unsigned int | Hexadecimal representation (uppercase) |
| %S | char* | String with non-printable chars as \x notation |
| %p | void* | Pointer address |

## Technical Challenges

1. **Variadic Function Handling**
   - Using the va_list, va_start, va_arg, va_end macros
   - Type-safe argument processing

2. **Dynamic Format Processing**
   - Parsing format strings at runtime
   - Handling edge cases and errors

3. **Base Conversion Logic**
   - Converting numbers between different bases
   - Maintaining precision and accuracy

4. **Memory Safety**
   - Preventing buffer overflows
   - Proper string termination

## Project Extensions

Potential extensions beyond the basic requirements:

- Field width and precision specifiers
- Additional flags (zero-padding, justification)
- Floating-point number support
- Error handling enhancements

## Testing Strategy

- Unit tests for individual format handlers
- Integration tests for complete strings
- Edge case testing (NULL pointers, extreme values)
- Comparison with standard printf behavior
