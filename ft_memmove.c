/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:43:19 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/04/29 11:19:43 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*isrc;
	unsigned char	*idst;

	isrc = (unsigned char *)src;
	idst = (unsigned char *)dst;
	if (isrc == NULL && idst == NULL)
		return (idst);
	i = 0;
	if (idst < isrc)
	{
		while (i < len)
		{
			idst[i] = isrc[i];
			i++;
		}
	}
	else
	{
		while (len-- >= 1)
			idst[len] = isrc[len];
	}
	return (idst);
}
