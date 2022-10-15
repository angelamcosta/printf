/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:50:41 by anlima            #+#    #+#             */
/*   Updated: 2022/10/15 16:09:22 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d(int i, char *base, int b)
{
	char	*s;
	int		len;

	s = ft_itoa(i);
	len = ft_strlen(s);
	free(s);
	ft_putnbr_base(i, base, b);
	return (len);
}
