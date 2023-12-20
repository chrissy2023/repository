/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaiju <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:45:17 by anbaiju           #+#    #+#             */
/*   Updated: 2023/12/15 11:27:06 by anbaiju          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return;
	}
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }

    if (nb > 9)
    {
        ft_putnbr(nb / 10);
    }

    ft_putchar(nb % 10 + '0');
}
/*
int main()
{
    ft_putnbr(42);
}*/
