/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 03:56:32 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/18 18:21:03 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *s)
{
	if (!s)
		return ;
	while (*s)
	{
		write (1, s, 1);
		s++;
	}
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void	handler(int sig)
{
	static int	count;
	static char alphabet;

	count = 0;
	alphabet = 0;
	printf("hi\n");
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
	ft_putstr(CYN"PID: ");
	ft_putnbr(getpid());
	ft_putstr("\n");
	while (1)
	{
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
	}
}