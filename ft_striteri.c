/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:11:29 by salhali           #+#    #+#             */
/*   Updated: 2024/11/14 19:11:03 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	check(unsigned int a, char *str)
{
	(void)a;
	
	if (*str >= 'a' && *str <= 'z')
		*str-=32;
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "salaheddine";
	
	ft_striteri(str, check);
	printf("%s\n", str);
	return(0);
}*/