/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:10:27 by salhali           #+#    #+#             */
/*   Updated: 2024/11/16 20:43:13 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((i + j) < len && big[i + j] != '\0' && big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
    #include <string.h>
    #include <xlocale.h>
int	main()
{
	char	oo[] = "salaheddine";
	char	gg[] = "edd";
	int	i = 1;

	printf("%s\n", ft_strnstr(oo, gg, i));
	printf("%s\n", strnstr(oo, gg, i));
}
*/