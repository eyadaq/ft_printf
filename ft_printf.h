/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 03:21:56 by eaqrabaw          #+#    #+#             */
/*   Updated: 2024/09/11 03:24:07 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *var, ...);
int	ft_putunsigned(unsigned int digit);
int	ft_putstr_printf(char *ptr);
int	ft_putptr(void *ptr);
int	ft_puthexa(unsigned int hexa, char x);
#endif
