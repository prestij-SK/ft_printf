#include "ft_printf.h"

void	simple_format_specifiers(const char *format, va_list args, int *print_count)
{
	if (*format == '%')
		print_char('%', print_count);
	else if (*format == 'c')
		print_char(va_arg(args, int), print_count);
	else if (*format == 's')
		print_string(va_arg(args, char *), print_count);
	else if (*format == 'p')
		print_pointer(va_arg(args, size_t), print_count);
	else if (*format == 'd' || *format == 'i')
		print_dec_int(va_arg(args, int), print_count);
	else if (*format == 'u')
		print_dec_unsigned_int(va_arg(args, unsigned int), print_count);
	else if (*format == 'x' || *format == 'X')
		print_hexadec_int(va_arg(args, unsigned int), *format, print_count);
	else
		print_char(*format, print_count);
}

// '-' '0' '.' '#' ' ' '+'
// bonus
// void	flag_format_specifiers(const char *format, va_list args, int *print_count)
// {
// }