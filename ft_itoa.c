/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:16:30 by salhali           #+#    #+#             */
/*   Updated: 2024/11/15 13:22:47 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	convert(int n)
{
	return (n % 10 + '0');
}

static int	count(int n)
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

static char	*re(int nbr, char *str, size_t count_len, size_t sign)
{
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

char	*ft_itoa(int nbr)
{
	char	*str;
	size_t	sign;
	size_t	count_len;

	sign = 0;
	str = NULL;
	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nbr < 0)
	{
		nbr = -nbr;
		sign++;
	}
	count_len = count(nbr);
	while (nbr == 0)
	{
		str = malloc(2);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	return (re(nbr, str, count_len, sign));
}
