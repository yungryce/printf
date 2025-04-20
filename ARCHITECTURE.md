# Printf Project Architecture

## Component Overview

The custom printf implementation follows a modular architecture with specialized components for different format types.

## Flow Diagram

```mermaid
flowchart TD
    A[User Code] --> B[_printf Function]
    B --> C{Format String Processing}
    C -->|No format specifier| D[Direct Output]
    C -->|Format specifier| E[Specifier Matching]
    E --> F{Format Handler Selection}
    F -->|%c| G[Character Handler]
    F -->|%s| H[String Handler]
    F -->|%d/%i| I[Decimal/Integer Handler]
    F -->|%b/%o/%x/%X| J[Base Conversion Handler]
    F -->|%S| K[ASCII-Hex Handler]
    F -->|%p| L[Pointer Handler]
    F -->|Unrecognized| M[Default Handler]
    G --> N[_putchar]
    H --> N
    I --> N
    J --> N
    K --> N
    L --> N
    M --> N
    N --> O[Standard Output]
```

## Component Interactions

```mermaid
classDiagram
    class _printf {
        +parse format string
        +manage va_list
        +select handlers
        +return count
    }
    
    class FormatHandlers {
        +print_char()
        +print_string()
        +print_int()
        +print_decimal()
        +print_unsigned()
        +print_binary()
        +print_octal()
        +print_hex_lower()
        +print_hex_upper()
        +print_ascii_hex()
        +print_pointer()
    }
    
    class UtilityFunctions {
        +_putchar()
        +print_number()
        +print_number_base()
        +print_number_base_upper()
    }
    
    _printf --> FormatHandlers : calls
    FormatHandlers --> UtilityFunctions : uses
```

## Memory Model

```mermaid
graph TD
    A[Stack] --> B[va_list args]
    A --> C[Function Parameters]
    A --> D[Local Variables]
    B --> E[Variable Arguments]
    E --> F[char]
    E --> G[int]
    E --> H[char*]
    E --> I[void*]
```

## Error Handling

```mermaid
flowchart LR
    A[Input] --> B{Validation}
    B -->|NULL format| C[Return Error]
    B -->|Invalid format| D[Print as is]
    B -->|Valid format| E[Process normally]
    E --> F{Format Specifier}
    F -->|Recognized| G[Call Handler]
    F -->|Unrecognized| H[Print % and char]
```

## Data Transformation

```mermaid
graph TD
    A[Source Data] --> B{Format Type}
    B -->|Character| C[Direct Output]
    B -->|String| D[Character by Character]
    B -->|Integer| E[Base 10 Conversion]
    B -->|Binary| F[Base 2 Conversion]
    B -->|Octal| G[Base 8 Conversion] 
    B -->|Hex| H[Base 16 Conversion]
    B -->|Pointer| I[Address to Hex]
    C --> J[_putchar]
    D --> J
    E --> J
    F --> J
    G --> J
    H --> J
    I --> J
```
