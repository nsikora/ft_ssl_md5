/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsikora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:34:23 by nsikora           #+#    #+#             */
/*   Updated: 2019/05/25 12:15:49 by nsikora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_reverse(t_lst **begin_list)
{
	t_lst	*last;
	t_lst	*next;
	t_lst	*tmp;

	if (begin_list && *begin_list)
	{
		last = *begin_list;
		if (last->next != NULL)
		{
			next = last->next;
			last->next = NULL;
			while (next->next != NULL)
			{
				tmp = next->next;
				next->next = last;
				last = next;
				next = tmp;
			}
		}
	}
}
