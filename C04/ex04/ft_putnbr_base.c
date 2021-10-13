/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:25:11 by guvargas          #+#    #+#             */
/*   Updated: 2021/10/05 17:44:33 by guvargas         ###   ########.fr       */
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

long int	is_negative(long int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
	}
	return (n);
}

void	print_number(long int nb, int long_base, char *base)
{
	long int			cont;
	long int			pot;
	long int			aux;
	long int			a;

	nb = is_negative(nb);
	aux = nb;
	pot = 1;
	cont = 0;
	while (aux % long_base != aux)
	{
		pot = pot * long_base;
		cont++;
		aux = aux / long_base;
	}
	a = 0;
	while (a <= cont)
	{
		write(1, (*(base + (nb / pot))), 1);
		nb = nb % pot;
		pot = pot / long_base;
		a++;
	}
}

int	check_base(char *str)
{
	int	i;
	int	j;

	if (str[0] == '\0')
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			good_base;
	int			long_base;
	long int	nb2;

	nb2 = (long) nbr;
	good_base = check_base(base);
	if (good_base == 1)
	{
		long_base = ft_strlen(base);
		print_number(nb2, long_base, base);
	}
}
