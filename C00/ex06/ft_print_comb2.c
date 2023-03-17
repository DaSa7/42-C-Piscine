/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 00:08:00 by dshutko           #+#    #+#             */
/*   Updated: 2022/11/18 03:25:14 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char n)
{
	write (1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{	
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a / 10 + '0');
			ft_print(a % 10 + '0');
			ft_print(' ');
			ft_print(b / 10 + '0');
			ft_print(b % 10 + '0');
			if (a != 98)
			{
				write (1, ",", 1);
				write (1, " ", 1);
			}
			++b;
		}
		++a;
	}
}
