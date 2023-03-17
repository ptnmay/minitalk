/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 03:56:32 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/17 21:44:44 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int sig)
{
	static int	count;
	static char alphabet;

	if (sig == SIGUSR1)
	{
		
	}
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
		sinal(SIGUSR1, handler);
		sinal(SIGUSR2, handler);
	}
	
}