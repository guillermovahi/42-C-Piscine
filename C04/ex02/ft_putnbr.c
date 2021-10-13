/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:32:16 by guvargas          #+#    #+#             */
/*   Updated: 2021/10/01 09:32:17 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_negative(int n)
{
	if (n < 0 && n != -2147483648)
	{
		write(1, "-", 1);
		n = n * (-1);
	}
	return (n);
}

void	print_number(int nb)
{
	int	cont;
	int	pot;
	int	aux;
	int	a;

	nb = is_negative(nb);
	aux = nb;
	pot = 1;
	cont = 0;
	while (aux % 10 != aux)
	{
		pot = pot * 10;
		cont++;
		aux = aux / 10;
	}
	a = 0;
	while (a <= cont)
	{
		ft_putchar(nb / pot + '0');
		nb = nb % pot;
		pot = pot / 10;
		a++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-'), ft_putchar('2'), ft_putchar('1'), ft_putchar('4');
		ft_putchar('7'), ft_putchar('4'), ft_putchar('8'), ft_putchar('3');
		ft_putchar('6'), ft_putchar('4'), ft_putchar('8');
	}
	else
		print_number(nb);
}
