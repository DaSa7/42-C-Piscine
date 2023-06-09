/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:56:33 by dshutko           #+#    #+#             */
/*   Updated: 2022/11/23 15:02:52 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int	main(void)
{
	char str1[] = {"123456"};
	char str2[] = {"123456"};

	if (ft_strcmp(str1, str2) == 0)
	write (1, "same", 42);
	else
	write (1, "diff", 52);
	write (1, "\n", 1);
	return (0);
}*/
