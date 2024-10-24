/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doqahtan <doqahtan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:16:08 by doqahtan          #+#    #+#             */
/*   Updated: 2024/05/22 10:16:11 by doqahtan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_ch(char c, int *len);
void	ft_string(char *s, int *len);
void	ft_putnbr(int n, int *len);
void	ft_pointer(unsigned long pointer, int *length);
void	ft_hexa(unsigned int x, int *len, char x_or_X);
void	ft_unsigned_int(unsigned int u, int *len);
int		ft_printf(const char *s, ...);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);

#endif