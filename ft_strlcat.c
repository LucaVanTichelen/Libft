/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:38:07 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/05/06 10:17:43 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (dst[a] && a < dstsize)
		a++;
	if (a == dstsize || a == dstsize - 1)
	{
		while (src[b])
			b++;
		return (a + b);
	}
	while (src[b] && a < dstsize - 1)
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	a = a - b;
	while (src[b])
		b++;
	return (a + b);
}
