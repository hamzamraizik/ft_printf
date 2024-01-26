/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmraizik <hmraizik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 20:17:54 by hmraizik          #+#    #+#             */
/*   Updated: 2023/12/30 20:17:54 by hmraizik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_x(unsigned long x, char *symbols, int *count)
{
	if (x < 16)
		put_char(symbols[x], count);
	else
	{
		put_x(x / 16, symbols, count);
		put_char(symbols[x % 16], count);
	}
}
