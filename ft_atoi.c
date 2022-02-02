/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:39:50 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/05/06 12:39:01 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_space(const char *str, int i)
{
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	return (i);
}

static int	ft_sign(const char *str, int i)
{
	if (str[i] == '-')
		return (-1);
	else
		return (1);
}

static int	ft_convert(const char *str, int n, int i)
{
	n = n * 10;
	n = n + str[i] - 48;
	return (n);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	x;
	int	z;

	i = 0;
	n = 0;
	x = 1;
	i = ft_space(str, i);
	if (str[i] == '-' || str[i] == '+')
	{
		x = ft_sign(str, i);
		i++;
	}
	z = i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (x == -1 && ((i - z == 18 && str[i] >= '8') || i - z == 19))
			return (0);
		else if ((i - z == 18 && str[i] >= '8') || i - z == 19)
			return (-1);
		n = ft_convert(str, n, i);
		i++;
	}
	return (n * x);
}
