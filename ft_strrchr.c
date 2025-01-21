/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:44:46 by salhali           #+#    #+#             */
/*   Updated: 2024/11/16 19:43:33 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*last;

	i = 0;
	last = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
		{
			last = ((char *)&str[i]);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&str[i]);
	return (last);
}
