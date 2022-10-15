/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:01:37 by anlima            #+#    #+#             */
/*   Updated: 2022/10/15 22:03:25 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_x(unsigned long n, char *base, int i)
{
	int				c;

	c = 0;
	if (n / i > 0)
		c += ft_putnbr_base_x(n / i, base, i);
	ft_putchar_fd(base[n % i], 1);
	c++;
	return (c);
}
