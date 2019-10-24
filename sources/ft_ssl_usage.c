/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl_usage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsikora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:29:10 by nsikora           #+#    #+#             */
/*   Updated: 2019/05/29 09:03:12 by nsikora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "types.h"

extern t_bool		ft_ssl_flags_usage(t_pchar s)
{
	ft_putstr_fd("ft_ssl: '", 2);
	ft_putstr_fd(s, 2);
	ft_putendl_fd("' is unknown", 2);
	return (FALSE);
}

extern t_bool		ft_ssl_flags_usage_exclu(t_pchar s)
{
	ft_putstr_fd("ft_ssl: '", 2);
	ft_putstr_fd(s, 2);
	ft_putendl_fd("' cannot be associated with an another flag", 2);
	return (FALSE);
}

extern void			ft_ssl_usage_command(void)
{
	ft_putendl_fd("Standard commands:", 2);
	ft_putendl_fd("", 2);
	ft_putendl_fd("Message Digest commands:", 2);
	ft_putendl_fd("md5", 2);
	ft_putendl_fd("sha256", 2);
	ft_putendl_fd("", 2);
	ft_putendl_fd("Cipher commands:", 2);
}

extern void			ft_ssl_usage(void)
{
	ft_putendl_fd("usage: ft_ssl command [command opts] [command args]", 2);
}

extern void			ft_ssl_error_command(t_pchar cmd)
{
	ft_putstr_fd("ft_ssl: Error:'", 2);
	ft_putstr_fd(cmd, 2);
	ft_putendl_fd("'is an invalid command.", 2);
	ft_putendl_fd("", 2);
	ft_ssl_usage_command();
}
