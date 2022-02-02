/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 14:31:20 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/04/30 16:24:10 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*is1;
	unsigned char	*is2;
	size_t			i;

	is1 = (unsigned char *) s1;
	is2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (is1[i] == is2[i] && i < n - 1)
		i++;
	if (is1[i] == is2[i])
		return (0);
	else
		return (is1[i] - is2[i]);
}
