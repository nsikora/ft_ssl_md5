/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsikora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:32:56 by nsikora           #+#    #+#             */
/*   Updated: 2019/05/25 12:15:48 by nsikora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(int n)
{
	int		nbr;

	nbr = 0;
	if (n < 0)
		nbr = nbr + 1;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		nbr = nbr + 1;
		n = n / 10;
	}
	return (nbr);
}

static char	*complete_str(char *str, int n, char neg)
{
	int		i;

	i = 0;
	if (n == 0)
		str[i++] = '0';
	while (n != 0)
	{
		str[i++] = (ABS(n % 10)) + '0';
		n = n / 10;
	}
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;

	if ((str = malloc(count_size(n) + 1)) == NULL)
		return (NULL);
	str = (n < 0) ? complete_str(str, n, 1) : complete_str(str, n, 0);
	if ((str = ft_revstr(str)) == NULL)
		return (NULL);
	return (str);
}
