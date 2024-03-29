/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 09:41:32 by guvargas          #+#    #+#             */
/*   Updated: 2021/09/25 19:38:04 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprimir(char i[5])
{
	write(1, &i[0], 1);
	write(1, &i[1], 1), write(1, " ", 1);
	write(1, &i[2], 1), write(1, &i[3], 1);
	if (!(i[0] == '9' && i[1] == '8'
			&& i[2] == '9' && i[3] == '9'))
		write(1, ",", 1), write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	char	a[5];

	a[0] = '0';
	a[1] = '0';
	while (a[0] <= '9')
	{
		while (a[1] <= '9')
		{
			a[2] = a[0];
			a[3] = a[1] + 1;
			while (a[2] <= '9')
			{
				while (a[3] <= '9')
				{
					imprimir(a);
					a[3]++;
				}
				a[2]++, a[3] = '0';
			}
			a[1]++;
		}
		a[0]++, a[1] = '0';
	}
}
