/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 03:56:15 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/18 03:06:48 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	show_char(char av, int pid)
{
	int	bit;
	int	shift;

	bit = 8;
	shift  = av;
	while (bit >= 1)
	{
		shift >> bit;
		
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
		show_char(av[2][i], pid);
		i++;
	}
}