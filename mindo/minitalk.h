/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doqahtan <doqahtan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:14:22 by doqahtan          #+#    #+#             */
/*   Updated: 2024/05/22 10:14:24 by doqahtan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "my_library/ft_printf.h"
# include <signal.h>
# include <unistd.h>

void	bit_handler(int bit);
void	send_bit(int pid, char *str, size_t len);

#endif