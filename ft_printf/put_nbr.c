/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmraizik <hmraizik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:05:23 by hmraizik          #+#    #+#             */
/*   Updated: 2023/12/30 20:36:50 by hmraizik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_nbr(long n, int *count)
{
	if (n < 0)
	{
		put_char('-', count);
		n = n * (-1);
	}
	if (n > 9)
	{
		put_nbr(n / 10, count);
		put_nbr(n % 10, count);
	}
	else
		put_char('0' + n, count);
}
