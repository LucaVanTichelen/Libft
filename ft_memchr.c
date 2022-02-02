/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 14:09:02 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/04/30 16:30:10 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*is;
	unsigned char	ic;
	size_t			i;

	is = (unsigned char *) s;
	ic = (unsigned char) c;
	i = 0;
	while (i < n - 1 && is[i] != ic)
		i++;
	if (is[i] == ic && i < n)
		return (is + i);
	else
		return (0);
}
