/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmraizik <hmraizik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:04:49 by hmraizik          #+#    #+#             */
/*   Updated: 2023/12/30 20:36:33 by hmraizik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FT_PRINTF_H)
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
void	put_nbr(long n, int *count);
void	put_char(int c, int *count);
void	put_str(char *str, int *count);
void	put_x(unsigned long x, char *symbols, int *count);
#endif // FT_PRINTF_H
