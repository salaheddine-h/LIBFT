/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:16:30 by salhali           #+#    #+#             */
/*   Updated: 2024/11/07 21:13:32 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    convert(int n)
{
    return (n % 10 + '0');
}

int    count(int n)
{
    int    count;

    count = 0;
    if (n <= 0)
        return (1);
	if(n < 0)
		n = -n;
    while (n)
    {
        count++;
        n = n / 10;
    }
    return (count);
}
char    *ft_itoa(int n)
{
    char    *str;
    size_t	sign;
    size_t	count_len;
    long    nbr;

    nbr = n;
	sign = 0;
	if(nbr == -2147483648)
		return("-2147483648");
    if (nbr < 0)
    {
        nbr = -nbr;
		sign++;
    }
	count_len = count(nbr);
    str = (char *)malloc(count_len + sign + 1);
    if (!str)
        return (NULL);
    str[count_len + sign] = '\0';
	if(nbr == 0)
		str[0] = '0';

    while (nbr > 0)
    {
        str[count_len + sign - 1] = convert(nbr);
        nbr = nbr / 10;
        count_len--;
    }
    if (sign > 0)
    {
        str[0] = '-';
    }
    return (str);
}
