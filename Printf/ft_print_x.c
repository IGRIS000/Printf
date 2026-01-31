/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichtioui <ichtioui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:57:44 by ichtioui          #+#    #+#             */
/*   Updated: 2025/12/14 11:36:11 by ichtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned long s)
{
	char	*hex;
	size_t	i;

	i = 0;
	hex = "0123456789abcdef";
	if (s >= 16)
		i += ft_print_x(s / 16);
	return (i + write(1, &hex[s % 16], 1));
}
