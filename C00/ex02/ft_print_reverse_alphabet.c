/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:44:53 by guvargas          #+#    #+#             */
/*   Updated: 2021/09/25 19:29:30 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	inicio;
	char	fin;

	inicio = 'z';
	fin = 'a';
	while (inicio >= fin)
	{
		write(1, &inicio, 1);
		inicio--;
	}
}
