/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichtioui <ichtioui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:58:28 by ichtioui          #+#    #+#             */
/*   Updated: 2025/11/26 19:03:11 by ichtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_bx(unsigned int s)
{
	char	*hex;
	size_t	i;

	i = 0;
	hex = "0123456789ABCDEF";
	if (s >= 16)
		i += ft_print_bx(s / 16);
	return (i + write(1, &hex[s % 16], 1));
}
