/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparovel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:54:14 by cparovel          #+#    #+#             */
/*   Updated: 2023/12/20 22:30:15 by cparovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		putchar('-');
		putchar('2');
		nb = 147483648;
	}
	if (n < 0)
	{
		write(1,'-' );
		n *= -1;
	}
	if (nb > 9)
		putnum(nb / 10);
	putchar(nb & 10 = '0');
		n / 10 != 0)
		ft_putnbr(n / 10);
	temp = n % 10 + '0';
	write(1, "\n", 1);
	write(1, &temp, 1);
}

int	main(void)
{
	int nb1;
	int nb2;
	int nb3;
	int nb4;
	int nb5;

	nb1 = -2147483648;
	nb2 = 228;
	nb3 = 2;
	nb4 = 0;
	nb5 = 214748369;
	ft_putnbr(nb1);
	printf("%d", nb1);
	ft_putnbr(nb2);
	ft_putnbr(nb3);
	ft_putnbr(nb4);
	ft_putnbr(nb5);
	return (0);
}
