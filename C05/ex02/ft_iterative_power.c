/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:23:55 by dshutko           #+#    #+#             */
/*   Updated: 2022/12/07 20:10:50 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		i *= nb;
		power--;
	}
	return (i);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_power(2, -10));
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(2, 1));
	printf("%d\n", ft_iterative_power(2, 10));
	printf("%d\n", ft_iterative_power(2, 12));
	printf("%d\n", ft_iterative_power(10, 3));
	return (0);
}*/
