/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:10:21 by guvargas          #+#    #+#             */
/*   Updated: 2021/10/07 18:44:06 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb % 2 == 0)
		return (0);
	while (i < nb && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2 )
		return (2);
	while (ft_is_prime(nb) == 0 && nb <= 2147483647)
	{
		nb++;
	}
	return (nb);
}
