#include "ft_printf.h"

#include <stdio.h>
#include <limits.h>

int main()
{
	ft_printf("\nnum: %d\n", ft_printf("This %p", (void *)-1));
	printf("\nnum: %d\n", printf("This %p", (void *)-1));
	printf("-------------------------------------\n");

	ft_printf("\nnum: %d\n", ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
	printf("\nnum: %d\n", printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
	printf("-------------------------------------\n");

	ft_printf("\nnum: %d\n", ft_printf(" %X ", 9223372036854775807LL));
	printf("\nnum: %d\n", printf(" %X ", 9223372036854775807LL));
	printf("-------------------------------------\n");

	ft_printf("\nnum: %d\n", ft_printf("%x", 0));
	printf("\nnum: %d\n", printf("%x", 0));
	printf("-------------------------------------\n");

	int c;
	int d;
	ft_printf("\nnum: %d\n", ft_printf("dasit small %x, dasist big %X, %d_%i", &c, &d, c, d));
	printf("\nnum: %d\n", printf("dasit small %x, dasist big %X, %d_%i", &c, &d, c, d));
	printf("-------------------------------------\n");

	ft_printf("\nnum: %d\n", ft_printf("%x", 12));
	printf("\nnum: %d\n", printf("%x", 12));
	printf("-------------------------------------\n");

	ft_printf("\nnum: %d\n", ft_printf("%X", -75342));
	printf("\nnum: %d\n", printf("%X", -75342));
	printf("-------------------------------------\n");

	ft_printf("\nnum: %d\n", ft_printf("%u", -123));
	printf("\nnum: %d\n", printf("%u", -123));
	printf("-------------------------------------\n");

	int b;
	ft_printf("\nnum: %d\n", ft_printf("%d I am here %c, to %s, but %p", NULL, 'c', "struna", &b));
	printf("\nnum: %d\n", printf("%d I am here %c, to %s, but %p", NULL, 'c', "struna", &b));
	printf("-------------------------------------\n");

	ft_printf("\nnum: %d\n", ft_printf("%d", -123));
	printf("\nnum: %d\n", printf("%d", -123));
	printf("-------------------------------------\n");

	ft_printf("\nnum: %d\n", ft_printf("%d", 1652148521485186521));
	printf("\nnum: %d\n", printf("%d", 1652148521485186521));
	printf("-------------------------------------\n");

	ft_printf("\nnum: %i\n", ft_printf("%d", -2147483648));
	printf("\nnum: %i\n", printf("%d", -2147483648));
	printf("-------------------------------------\n");

	ft_printf("\nnum: %d\n", ft_printf("%s", NULL));
	printf("\nnum: %d\n", printf("%s", NULL));
	printf("-------------------------------------\n");

	int a;
	ft_printf("\nnum: %d\n", ft_printf("%p", &a));
	printf("\nnum: %d\n", printf("%p", &a));
	printf("-------------------------------------\n");

	ft_printf("\nnum: %d\n", ft_printf("%p %p %p %p %p", NULL, 5, NULL, 12521, NULL));
	printf("\nnum: %d\n", printf("%p %p %p %p %p", NULL, 5, NULL, 12521, NULL));
	printf("-------------------------------------\n");

	ft_printf("\nnum: %d\n", ft_printf("%"));
	printf("\nnum: %d\n", printf("%"));
	printf("-------------------------------------\n");

	ft_printf("\nnum: %d\n", ft_printf("%%"));
	printf("\nnum: %d\n", printf("%%"));
	printf("-------------------------------------\n");

	ft_printf("\nnum: %d\n", ft_printf("a%sbuba _%c:di%s%%du%c","oaoaoaoaoaoa", 'Z', "JJJ", 'U'));
	printf("\nnum: %d\n", printf("a%sbuba _%c:di%s%%du%c","oaoaoaoaoaoa", 'Z', "JJJ", 'U'));
	printf("-------------------------------------\n");
}