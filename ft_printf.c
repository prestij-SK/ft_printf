#include "ft_printf.h"

static int	isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

// Returns format expressions length
static size_t	get_format_expression_len(const char *line)
{
	size_t	i;

	if (!line)
		return (0);
	if (!(*line))
		return (0);
	i = 0;
	while (line[i] && line[i] != '%' && !(isalpha(line[i])))
	{
		++i;
	}
	return (i + 1); // +1 size for specifier letter too
}

// Returns format expression
static char	*get_format_expression(const char *line, size_t size)
{
	char	*expression;
	size_t	i;

	if (!line)
		return (NULL);
	expression = (char *)malloc(sizeof(char) * (size + 1));
	if (!expression)
		return (NULL);
	i = 0;
	while (i < size)
	{
		expression[i] = line[i];
		++i;
	}
	expression[i] = '\0';
	return (expression);
}

// Returns how many iterations done to line
static size_t	print_format_specifier(const char *line, va_list args, int *print_count)
{
	size_t	expression_len;
	char	*format_expression;

	expression_len = get_format_expression_len(line);
	if (expression_len == 0)
		return (0);
	format_expression = get_format_expression(line, expression_len);
	if (!format_expression)
		return (0);
	if (expression_len == 1)
	{
		simple_format_specifiers(format_expression, args, print_count);
	}
	// else
	// {
	// 	flag_format_specifiers(format_expression, args, print_count); // bonus
	// }
	free(format_expression);
	return (expression_len);
}

int	ft_printf(const char *line, ...)
{
	va_list	args;
	int	print_count;

	if (!line)
		return (-1);
	if (!(*line))
		return (0);
	va_start(args, line);
	print_count = 0;
	while (*line)
	{
		if (*line == '%')
			line += print_format_specifier(line + 1, args, &print_count);
		else
			print_char(*line, &print_count);
		++line;
	}
	va_end(args);
	// for Ubuntu
	// if (print_count == -1)
	// 	return (-1);
	return (print_count);
}