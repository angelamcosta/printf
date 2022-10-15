/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:34:51 by anlima            #+#    #+#             */
/*   Updated: 2022/10/15 10:14:53 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>

char	*ft_itoa(int n);
int		ft_printf(const char *s, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_base(int nbr, char *base, int i);
void	ft_putnbr_fd(unsigned int n, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif