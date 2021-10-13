/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:53:24 by guvargas          #+#    #+#             */
/*   Updated: 2021/10/04 17:24:25 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	re[4];
	char	coma;

	coma = ',';
	re [0] = '0';
	while (re[0] <= '7')
	{
		re[1] = re[0] + 1;
		while (re[1] <= '8')
		{
			re[2] = re[1] + 1;
			while (re[2] <= '9')
			{
				write(1, &re[0], 1);
				write(1, &re[1], 1);
				write(1, &re[2], 1);
				if (!(re[0] == '7' && re[1] == '8' && re[2] == '9'))
					write(1, &coma, 1), write(1, " ", 1);
				re[2]++;
			}
			re[1]++;
		}
		re[0]++;
	}
}
