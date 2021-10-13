/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:18:05 by guvargas          #+#    #+#             */
/*   Updated: 2021/10/05 16:29:57 by guvargas         ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	int	salto;

	if (argc > 1)
	{
		salto = '\n';
		while (argc > 1)
		{				
			ft_putstr(argv[argc - 1]);
			write(1, &salto, 1);
			argc--;
		}
	}
	return (0);
}
