/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:03:46 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/05/06 12:41:32 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_front_set(char const *s1, char const *set)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s1[n] && set[i])
	{
		if (s1[n] == set[i])
		{
			n++;
			i = -1;
		}
		i++;
	}
	return (n);
}

static int	ft_back_set(char const *s1, char const *set, int x)
{
	int	i;

	i = 0;
	while (set[i] && s1[x] >= 0)
	{
		if (s1[x] == set[i])
		{
			x--;
			i = -1;
		}
		i++;
	}
	return (x);
}

static char	*ft_fill_str(int n, int x, char *str, char const *s1)
{
	int	i;

	i = 0;
	while (n <= x)
	{
		str[i] = s1[n];
		n++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		n;
	int		i;
	int		x;
	char	*str;

	if (!s1 || !set)
		return (0);
	n = ft_front_set(s1, set);
	if (s1[n] == '\0')
	{
		str = malloc(sizeof(char));
		if (!(str))
			return (0);
		str[0] = '\0';
		return (str);
	}
	x = 0;
	while (s1[x])
		x++;
	x = ft_back_set(s1, set, (x - 1));
	str = malloc(sizeof(char) * (x - n + 2));
	if (!(str))
		return (0);
	i = 0;
	return (ft_fill_str(n, x, str, s1));
}
