*This project has been created as part of the 42 curriculum by ichtioui*

# ft_printf

## Description
**ft_printf** is a custom implementation of the standard C library function `printf`. The goal of this project is to understand the underlying mechanisms of **variadic functions** in C, manage memory manually, and replicate the formatting behavior of the original function.

This library mimics the behavior of `printf` for specific conversion specifiers (`%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`) without implementing buffer management.

## Instructions

### Compilation
To compile the library, run:
```bash
make
```

### Installation
To use ft_printf in your project, include the header and link the library:
	1.Include the header in your code:
		#include "ft_printf.h"
	2.Compile your project with the library:
		cc main.c libftprintf.a

## Resources
	- Man pages.
	- Pages 57-59 of System V Application Binary Interface AMD64 Architecture Processor Supplement (With LP64 and ILP32 Programming Models)
	- AI was used for the understanding of how va_list works and general debugging.

## Algorithm and Data Structures
### Variadic Arguments
The core of this project relies on the `<stdarg.h>` macros to handle a variable number of arguments.

- Data Structure: I utilize `va_list` to traverse the stack (and register dump on x86_64).

- Initialization: `va_start` is used to initialize the pointer to the first variadic argument.

- Access: `va_arg` is used to retrieve arguments based on their type.

- Cleanup: `va_end` is called to clean up memory.

### The Dispatcher Logic
The main algorithm follows a linear scan approach:

- Parsing: The format string is iterated character by character.

- Detection: When a '%' is detected, the subsequent character is analyzed to determine the specifier.

- Dispatch: A helper function 'ft_check' directs the flow to the specific printing function (e.g., ft_print_s for strings, ft_print_x for hex).
