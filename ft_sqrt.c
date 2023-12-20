 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpennisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:40:22 by lpennisi          #+#    #+#             */
/*   Updated: 2023/12/17 16:39:34 by lpennisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_recursive(int nb, int try)
{
	if (nb / try == try)
		return (try);
	if (nb < 0 || try > nb / try)
		return (0);
	return (ft_sqrt_recursive(nb, try + 1));
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recursive(nb, 1));
}
