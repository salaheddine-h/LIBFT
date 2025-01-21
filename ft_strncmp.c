/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:58:19 by salhali           #+#    #+#             */
/*   Updated: 2024/11/16 20:05:40 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *dest, const char *src, size_t size)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if (size == 0)
		return (0);
	while (src[i] != '\0' && dest[i] != '\0' && i < size)
	{
		if (src[i] != dest[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	if (i == size)
		return (0);
	return (ptr1[i] - ptr2[i]);
}
