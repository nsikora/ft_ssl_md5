/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsikora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:31:33 by nsikora           #+#    #+#             */
/*   Updated: 2019/05/25 12:15:48 by nsikora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				ft_bzero(void *s, size_t n)
{
	size_t			i;
	char			*str;

	i = 0;
	str = (char *)s;
	while (i < n)
		str[i++] = '\0';
}
