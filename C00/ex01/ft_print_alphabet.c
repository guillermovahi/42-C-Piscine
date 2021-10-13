/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:12:26 by guvargas          #+#    #+#             */
/*   Updated: 2021/09/25 19:29:48 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	inicio;
	char	fin;

	inicio = 'a';
	fin = 'z';
	while (inicio <= fin)
	{
		write(1, &inicio, 1);
		inicio++;
	}
}
