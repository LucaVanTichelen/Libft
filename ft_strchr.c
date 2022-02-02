/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:38:29 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/04/29 15:01:10 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*is;
	char	ic;
	int		i;

	is = (char *) s;
	ic = (char) c;
	i = 0;
	while (is[i] != ic && is[i])
		i++;
	if (is[i] == ic)
		return (is + i);
	else
		return (0);
}
