/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:16:30 by salhali           #+#    #+#             */
/*   Updated: 2024/11/08 16:17:49 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	convert(int n)
{
	return (n % 10 + '0');
}

int	count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	sign;
	size_t	count_len;
	long	nbr;

	nbr = n;
	sign = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		sign++;
	}
	count_len = count(nbr);
	while (n == 0)
	{
		str = malloc(2);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str = (char *)malloc(count_len + sign + 1);
	if (!str)
		return (NULL);
	str[count_len + sign] = '\0';
	while (nbr > 0)
	{
		str[count_len + sign - 1] = convert(nbr);
		nbr = nbr / 10;
		count_len--;
	}
	if (sign > 0)
		str[0] = '-';
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa(  	 -2147483648));
}
