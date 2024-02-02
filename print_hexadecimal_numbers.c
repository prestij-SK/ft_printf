#include "ft_printf.h"

void	print_pointer(size_t decimal_pointer, int *print_count)
{
	char	hexa_str[HEXA_DIGITS];
	char	*hexa_base;
	int		i;

	// for Ubuntu
	// if (!decimal_pointer)
	// {
	// 	print_string("(nil)", print_count);
	// 	return ;
	// }
	print_string("0x", print_count);
	if (!decimal_pointer)
	{
		print_char('0', print_count);
		return ;
	}
	hexa_base = "0123456789abcdef";
	i = 0;
	while (decimal_pointer)
	{
		hexa_str[i] = hexa_base[decimal_pointer % 16];
		decimal_pointer /= 16;
		++i;
	}
	while (i > 0)
	{
		print_char(hexa_str[i - 1], print_count);
		--i;
	}
}

void	print_hexadec_int(unsigned int num, const char base_case, int *print_count)
{
	char	hexa_str[HEXA_DIGITS];
	char	*hexa_base;
	int		i;

	if (num == 0)
	{
		print_char('0', print_count);
		return ;
	}
	if (base_case == 'X')
		hexa_base = "0123456789ABCDEF";
	else
		hexa_base = "0123456789abcdef";
	i = 0;
	while (num)
	{
		hexa_str[i] = hexa_base[num % 16];
		num /= 16;
		++i;
	}
	while (i > 0)
	{
		print_char(hexa_str[i - 1], print_count);
		--i;
	}
}