/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparovel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:34:14 by cparovel          #+#    #+#             */
/*   Updated: 2023/12/13 15:06:28 by cparovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_print_reverse_alphabet(void)
{
	char	out;

	out = 'z';
	while (out >= 'a')
	{
		write(1, &out, 1);
		out--;
	}
}
