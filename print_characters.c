#include "ft_printf.h"

void	print_char(const char c, int *print_count)
{
	write (1, &c, 1);
	++(*print_count);
}

void	print_string(const char *str, int *print_count)
{
	if (!str)
	{
		write(1, "(null)", 6);
		*print_count += 6;
		return ;
	}
	while (*str)
	{
		print_char(*str, print_count);
		++str;
	}
}