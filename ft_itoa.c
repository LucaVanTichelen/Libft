/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:38:22 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/02/02 13:22:41 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_min(char *str)
{
	str[11] = '\0';
	str[10] = '8';
	str[9] = '4';
	str[8] = '6';
	str[7] = '3';
	str[6] = '8';
	str[5] = '4';
	str[4] = '7';
	str[3] = '4';
	str[2] = '1';
	str[1] = '2';
	str[0] = '-';
	return (str);
}

static int	ft_count(int n, int i)
{
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_fill(char *str, int n, int i, int x)
{
	i--;
	str[i] = '\0';
	i--;
	while (n >= 10)
	{
		str[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	if (n < 10)
		str[i] = n % 10 + 48;
	if (x == 1)
		str[i - 1] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		x;
	char	*str;

	i = 2;
	if (n == -2147483648)
	{
		str = malloc(sizeof(char) * 12);
		if (!str)
			return (0);
		return (ft_min(str));
	}
	else if (n < 0)
	{
		x = 1;
		i++;
		n = -n;
	}
	i = ft_count(n, i);
	str = malloc(sizeof(char) * i);
	if (!str)
		return (0);
	return (ft_fill(str, n, i, x));
}
