/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:51:42 by guvargas          #+#    #+#             */
/*   Updated: 2021/10/05 17:34:04 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && ((str[c] >= 'a') && (str[c] <= 'z')))
		{
			str[c] -= ('a' - 'A');
			i++;
		}
		else if (i > 0 && ((str[c] >= 'A') && (str[c] <= 'Z')))
			str[c] += ('a' - 'A');
		else if (((str[c] < '0') || (str[c] > '9')) && ((str[c] < 'A')
				|| (str[c] > 'Z')) && ((str[c] < 'a') || (str[c] > 'z')))
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}
