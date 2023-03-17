/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 03:57:21 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/17 00:00:41 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <sys/types.h>
# include <signal.h>

int     ft_atoi(const char *str);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar(char a);
void	ft_putnbr(int n);

#endif
