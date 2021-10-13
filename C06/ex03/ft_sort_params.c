/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:33:14 by guvargas          #+#    #+#             */
/*   Updated: 2021/10/06 16:33:53 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_params(int argc, char *argv[])
{
	int		i;

	i = 1;
	while (argc > 1)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
		argc--;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		dif;
	char	*aux;

	if (argc != 1)
	{	
		i = 1;
		while (i < (argc - 1))
		{		
			dif = ft_strcmp(argv[i], argv[i + 1]);
			if (dif > 0)
			{
				aux = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = aux;
				i = 1;
			}
			else
				i++;
		}
		print_params(argc, argv);
	}
	return (0);
}
