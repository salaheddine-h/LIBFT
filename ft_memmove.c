/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:02:59 by salhali           #+#    #+#             */
/*   Updated: 2024/11/07 18:17:01 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];

	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}
