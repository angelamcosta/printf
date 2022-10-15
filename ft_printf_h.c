/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_h.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:53:49 by anlima            #+#    #+#             */
/*   Updated: 2022/10/15 18:54:54 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_h(int i, char *base, int b)
{
	char	*s;
	int		len;

	len = 0;
	s = ft_itoa(i);
	len += ft_strlen(s);
	free(s);
	ft_putnbr_base(i, base, b);
	return (len);
}
