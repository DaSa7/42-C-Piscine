/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 21:42:43 by dshutko           #+#    #+#             */
/*   Updated: 2022/12/01 22:12:26 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}

/*int   main(void)
{
 		printf ("%d\n", ft_fibonacci(13));
		return (0);
}*/
