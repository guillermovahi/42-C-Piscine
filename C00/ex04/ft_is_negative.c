/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:22:04 by guvargas          #+#    #+#             */
/*   Updated: 2021/09/25 19:28:43 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	respuesta;

	respuesta = 'P';
	if (n < 0)
	{
		respuesta = 'N';
	}
	write(1, &respuesta, 1);
}
