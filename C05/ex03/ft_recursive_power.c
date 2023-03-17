/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:33:23 by dshutko           #+#    #+#             */
/*   Updated: 2022/12/01 21:40:35 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power -1);
	}
	return (nb);
}

/*int	main(void)
{
	printf ("%d\n", ft_recursive_power (-2, 5));
	return (0);
}*/
