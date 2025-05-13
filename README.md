The libft library is a C utility library that implements standard library functions and additional utilities. It's designed to be compiled into a static library (libft.a) that can be linked with other C programs.

Library Purpose
Recreates standard C library functions
Provides additional utility functions
Serves as a reusable code foundation
Demonstrates understanding of fundamental algorithms and data structures
Function Categories
String Manipulation (ft_split, ft_strjoin, etc.)
Memory Management (ft_memset, ft_bzero, etc.)
Character Classification (ft_isalpha, ft_isdigit, etc.)
Conversion Utilities (ft_atoi, ft_itoa)
File I/O Operations (ft_putchar_fd, ft_putstr_fd, etc.)
Linked List Utilities (bonus functions)
Building the Library
The library uses a standard Makefile with targets:

all: Builds the main library
bonus: Builds with bonus functions (currently commented out ,because i removed the bonus files).
clean: Removes object files
fclean: Removes both object files and the library
re: Rebuilds the library from scratch
