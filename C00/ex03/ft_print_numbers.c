/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:10:51 by guvargas          #+#    #+#             */
/*   Updated: 2021/09/25 19:29:17 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	inicio;
	char	fin;

	inicio = '0';
	fin = '9';
	while (inicio <= fin)
	{
		write(1, &inicio, 1);
		inicio++;
	}
}
