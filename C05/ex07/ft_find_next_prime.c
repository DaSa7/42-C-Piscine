/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:07:58 by dshutko           #+#    #+#             */
/*   Updated: 2022/11/29 21:21:41 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_find_next_prime(int nb)
{
	long	a;

	a = 2;
	while (a < nb)
	{
		if (nb % a == 0)
		{
			nb = nb + 1;
		}
		a++;
	}
	return (nb);
}

/*int	main(void)
{
	int b;

	b = ft_find_next_prime(15);
	printf ("%d\n", b);
	return (0);
}*/
