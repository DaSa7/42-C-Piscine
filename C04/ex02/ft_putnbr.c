/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:53:22 by dshutko           #+#    #+#             */
/*   Updated: 2022/12/06 20:08:46 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar ('-');
		ft_putchar ('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nb = -1 * nb;
	}
	if (nb < 10)
	{
		ft_putchar (nb + 48);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

/*int	main(void)
{
	ft_putnbr(42);
	return (0);
}*/
