/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmraizik <hmraizik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 20:17:30 by hmraizik          #+#    #+#             */
/*   Updated: 2024/01/09 21:20:40 by hmraizik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_format(char specifier, va_list my_list, int *count)
{
	char	*symbols_lower;
	char	*symbols_upper;

	symbols_lower = "0123456789abcdef";
	symbols_upper = "0123456789ABCDEF";
	if (specifier == 'c')
		put_char(va_arg(my_list, int), count);
	else if (specifier == 's')
		put_str(va_arg(my_list, char *), count);
	else if (specifier == 'd' || specifier == 'i')
		put_nbr((long)(va_arg(my_list, int)), count);
	else if (specifier == 'u')
		put_nbr((unsigned int)va_arg(my_list, int), count);
	else if (specifier == 'x')
		put_x((va_arg(my_list, unsigned int)), symbols_lower, count);
	else if (specifier == 'X')
		put_x((va_arg(my_list, unsigned int)), symbols_upper, count);
	else if (specifier == 'p')
	{
		put_str("0x", count);
		put_x((unsigned long)va_arg(my_list, void *), symbols_lower, count);
	}
	else
		put_char(specifier, count);
}

int	ft_printf(const char *format, ...)
{
	va_list	my_list;
	int		count;
	int		i;

	i = 0;
	va_start(my_list, format);
	if (write(1, "", 0) == -1)
		return (-1);
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[++i] == '\0')
				break ;
			print_format(format[i], my_list, &count);
		}
		else if (format[i])
			put_char(format[i], &count);
		++i;
	}
	va_end(my_list);
	return (count);
}
#include <stdio.h>
int main()
{
	int i;
	int j;

	i = ft_printf("kufshg%m");
	j = printf("kufshg%m");
	printf("%d %d",i, j)
}