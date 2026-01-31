/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichtioui <ichtioui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:35:51 by ichtioui          #+#    #+#             */
/*   Updated: 2025/11/27 10:08:19 by ichtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_c(char c);
int	ft_print_s(const char *s);
int	ft_print_x(unsigned long s);
int	ft_print_bx(unsigned int s);
int	ft_print_p(unsigned long s);
int	ft_print_d(int d);
int	ft_print_u(unsigned int u);

#endif