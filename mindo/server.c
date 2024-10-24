/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doqahtan <doqahtan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:14:03 by doqahtan          #+#    #+#             */
/*   Updated: 2024/05/22 10:20:18 by doqahtan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bit_handler(int bit)
{
	static int	c = 0;
	static int	i = 0;

	c += ((bit & 1) << i);
	i++;
	if (i == 7)
	{
		ft_printf("%c", c);
		if (!c)
			ft_printf("\n");
		c = 0;
		i = 0;
	}
}

int	main(void)
{
	ft_printf("My Server PID is: %d\n", getpid());
	while (1)
	{
		signal(SIGUSR2, bit_handler);
		signal(SIGUSR1, bit_handler);
		pause();
	}
	return (0);
}
