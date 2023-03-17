/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:40:45 by dshutko           #+#    #+#             */
/*   Updated: 2022/11/26 16:48:11 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	write (1, str, i);
}*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (length < nb && src[length] != '\0')
	{
		dest[i] = src[length];
		++i;
		++length;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	 main(void)
{
	char a[] = {"hello_world\n"};
	char b[20] = {"Hello "};

	ft_strncat(b, a, 42);
	ft_putstr(b);
	return (0);
}*/
