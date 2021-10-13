/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_atoi.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: guvargas <guvargas@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/10/01 09:33:13 by guvargas		  #+#	#+#			 */
/*   Updated: 2021/10/05 14:03:12 by guvargas		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	y;
	int	z;

	i = 0;
	y = 1;
	z = 0;
	while ((str[i] <= 9 && str[i] >= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			y *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		z = (str[i] - '0') + (z * 10);
		i++;
	}
	return (z * y);
}