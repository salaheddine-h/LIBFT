/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:02:59 by salhali           #+#    #+#             */
/*   Updated: 2024/11/16 20:09:38 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (!dst && !src)
		return (NULL);
	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	i = len;
	if (p1 < p2)
		ft_memcpy(dst, src, len);
	else if (p1 > p2)
	{
		while (i > 0)
		{
			p1[i - 1] = p2[i - 1];
			i--;
		}
	}
	return (dst);
}
