/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:34:51 by anlima            #+#    #+#             */
/*   Updated: 2022/10/15 22:02:40 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *s, ...);
void	ft_putnbr_base(int nbr, char *base, int i);
int		ft_printf_s(char *s);
int		ft_printf_d(int i, char *base, int b);
int		ft_printf_h(int i, char *base, int b);
int		ft_printf_p(unsigned long i, char *base, int b);
int		ft_printf_u(long long int i, char *base, int b);
int		ft_printf_x(unsigned long i, char *base, int b);
int		ft_putnbr_base_x(unsigned long n, char *base, int i);

#endif
