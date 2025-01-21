/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:36:57 by salhali           #+#    #+#             */
/*   Updated: 2024/11/16 19:42:56 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/*int	main(void)
{
	char	dest[] = "salaheddine";
	char	src[] = "haliuu";
	size_t	len = 6;

	//printf("%zu\n", ft_strlcpy(NULL, src, len));
	printf("%zu\n", strlcpy(NULL, src, len));

	return(0);
}*/
