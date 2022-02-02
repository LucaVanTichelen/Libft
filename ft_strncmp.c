/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:17:45 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/04/29 15:04:24 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*is1;
	unsigned char	*is2;

	is1 = (unsigned char *) s1;
	is2 = (unsigned char *) s2;
	i = 0;
	while (is1[i] && is2[i] && is1[i] == is2[i] && i < n - 1)
		i++;
	if (is1[i] == is2[i] || n == 0)
		return (0);
	else
		return (is1[i] - is2[i]);
}
