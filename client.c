/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 03:56:15 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/17 21:47:57 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	show_char(char av, int pid)
{
	int	i;
	int	shift;
}

int main(int ac, char **av)
{
	int	pid;
	int	i;
	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		while (av[2][i])
		{
			show_char(av[2][i], pid);
			i++;
		}
	}	
}