/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 03:56:32 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/18 03:06:27 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int sig)
{
	static int	count;
	static char alphabet;

	count = 0;
	alphabet = 0;
	if (sig == SIGUSR1)
		alphabet = alphabet + 1;
	count++;
	if (count == 8)
	{
		ft_putchar(alphabet);
		count = 0;
		alphabet = 0;
	}
	else
		alphabet <<= 1;
}

int main(void)
{
	ft_putstr("PID: ");
	ft_putnbr(getpid());
	ft_putstr("\n");
	while (1)
	{
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
	}
	
}