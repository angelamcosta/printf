/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:28:55 by anlima            #+#    #+#             */
/*   Updated: 2022/10/15 11:24:29 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int n, char *base, int i)
{
	unsigned int	nbr;

	if (n < 0)
	{
		write(1, "-", 1);
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr / i > 0)
		ft_putnbr_base(nbr / i, base, i);
	ft_putchar_fd(base[nbr % i], 1);
}
