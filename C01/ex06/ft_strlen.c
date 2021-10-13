/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:59:04 by guvargas          #+#    #+#             */
/*   Updated: 2021/09/26 17:06:45 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	caracter;

	caracter = 0;
	while (str[caracter] != '\0')
	{
		caracter++;
	}
	return (caracter);
}
