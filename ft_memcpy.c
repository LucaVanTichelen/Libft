/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:01:50 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/04/29 11:19:26 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*isrc;
	unsigned char	*idst;

	isrc = (unsigned char *)src;
	idst = (unsigned char *)dst;
	if (isrc == NULL && idst == NULL)
		return (idst);
	i = 0;
	while (i < n)
	{
		idst[i] = isrc[i];
		i++;
	}
	return (idst);
}
