/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:46:16 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/04/30 16:15:28 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	x;
	unsigned char	*idst;
	unsigned char	*isrc;
	size_t			i;

	x = (unsigned char) c;
	idst = (unsigned char *) dst;
	isrc = (unsigned char *) src;
	i = 0;
	while (i < n && isrc[i] != x)
	{
		idst[i] = isrc[i];
		i++;
	}
	if (isrc[i] == x && i < n)
	{
		idst[i] = isrc[i];
		return (idst + i + 1);
	}
	return (NULL);
}
