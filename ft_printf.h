#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

# define HEXA_DIGITS 32

int		ft_printf(const char *line, ...);
void	simple_format_specifiers(const char *format, va_list args, int *print_count);

void	print_char(const char c, int *print_count); // %c
void	print_dec_int(const int num, int *print_count); // %i or %d
void	print_string(const char *str, int *print_count); // %s
void	print_pointer(size_t decimal_pointer, int *print_count); // %p
void	print_dec_unsigned_int(const unsigned int num, int *print_count); // %u
void	print_hexadec_int(unsigned int num, const char base_case, int *print_count); // %x or %X

#endif
