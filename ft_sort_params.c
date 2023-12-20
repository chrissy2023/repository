/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:54:44 by fchiappo          #+#    #+#             */
/*   Updated: 2023/12/18 20:29:45 by fchiappo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

void	ft_print_args(int argc, char **argv)
{
	int	a;
	int	i;

	a = 1;
	while (a < argc)
	{
		i = 0;
		while (argv[a][i] != '\0')
		{
			i++;
		}
		write(1, argv[a], i);
		write(1, "\n", 1);
		a++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (ft_strcmp(argv[j], argv[j - 1]) < 0 && j > 1)
		{
			swap = argv[j - 1];
			argv[j - 1] = argv [j];
			argv[j] = swap;
			j--;
		}
		i++;
	}
	ft_print_args(argc, argv);
	return (0);
}
