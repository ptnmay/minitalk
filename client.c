/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 03:56:15 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/18 18:18:35 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	int	ans;
	int	neg;

	ans = 0;
	neg = 1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
	return (ans * neg);
}

void	deliver(char av, int pid)
{
	int	bit;
	int	shift;

	bit = 8;
	shift = av;
	while (bit >= 1)
	{
		if ((shift >> bit) && 1)
		{
			if (kill(pid, SIGUSR1) == -1)
				exit(EXIT_FAILURE);
		}
		else
		{
			if (kill(pid, SIGUSR2) == -1)
				exit(EXIT_FAILURE);
		}
		bit--;
	}
}

int main(int ac, char **av)
{
	int	pid;
	int	i;

	i = 0;
	if (ac < 1 || ac != 3)
		exit(0);
	pid = ft_atoi(av[1]);
	while (av[2][i])
	{
		deliver(av[2][i], pid);
		i++;
	}
}