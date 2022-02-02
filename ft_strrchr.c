/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:52:44 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/04/29 15:05:23 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*is;
	char	ic;
	int		i;

	is = (char *) s;
	ic = (char) c;
	i = 0;
	while (is[i])
		i++;
	while (is[i] != ic && i != 0)
		i--;
	if (is[i] == ic)
		return (is + i);
	else
		return (0);
}
