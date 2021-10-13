/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:26:19 by guvargas          #+#    #+#             */
/*   Updated: 2021/10/01 09:28:43 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
