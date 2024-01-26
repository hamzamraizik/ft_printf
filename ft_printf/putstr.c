/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmraizik <hmraizik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:04:12 by hmraizik          #+#    #+#             */
/*   Updated: 2023/12/28 20:04:15 by hmraizik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_str(char *str, int *count)
{
	if (str == NULL)
		put_str("(null)", count);
	else
	{
		while (*str)
		{
			put_char(*str, count);
			str++;
		}
	}
}
