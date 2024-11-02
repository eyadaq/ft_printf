/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:04:57 by eaqrabaw          #+#    #+#             */
/*   Updated: 2024/09/12 04:56:53 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	x;

	x = 0;
	if (s != NULL)
	{
		x = (int)ft_strlen(s);
		write(fd, s, x);
		return (x);
	}
	return (0);
}
