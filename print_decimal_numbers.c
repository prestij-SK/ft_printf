#include "ft_printf.h"

void	print_dec_int(const int num, int *print_count)
{
	if (num == -2147483648)
	{
		print_string("-2147483648", print_count);
		return ;
	}
	else if (num < 0)
	{
		print_char('-', print_count);
		print_dec_int(num * -1, print_count);
		return ;
	}
	else if (num >= 0 && num <= 9)
	{
		print_char(num + '0', print_count);
		return ;
	}
	print_dec_int(num / 10, print_count);
	print_dec_int(num % 10, print_count);
}

void	print_dec_unsigned_int(const unsigned int num, int *print_count)
{
	if (num >= 0 && num <= 9)
	{
		print_char(num + '0', print_count);
		return ;
	}
	print_dec_unsigned_int(num / 10, print_count);
	print_dec_unsigned_int(num % 10, print_count);
}