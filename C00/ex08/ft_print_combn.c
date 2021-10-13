/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:41:08 by guvargas          #+#    #+#             */
/*   Updated: 2021/10/04 17:57:03 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_array(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(a[i] + '0');
		i++;
	}
	if (a[0] != (9 - n + 1))
		ft_putchar(','), ft_putchar(' ');
}

void	combn_rec(int n, int i, int *a, int start)
{
	while (start <= 9)
	{
		a[i] = start;
		if (i == (n - 1))
			print_array(a, n);
		else
			combn_rec(n, i + 1, a, start + 1);
		start++;
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	a[9];
	int	start;

	i = 0;
	start = 0;
	combn_rec(n, i, a, start);
}
