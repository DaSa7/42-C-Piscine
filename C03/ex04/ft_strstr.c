/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:59:01 by dshutko           #+#    #+#             */
/*   Updated: 2022/11/23 16:36:49 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	a;
	int	b;

	b = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		ft_putchar('2');
		nb = 147483648;
	}
	a = nb;
	while ((a /= 10) > 0)
			b *= 10;
	a = nb;
	while (b)
	{
		ft_putchar((char)((a / b)) + 48);
		a %= b;
		b /= 10;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	write (1, str, i);
}*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return ((void *)0);
}

/*int	 main(void)
{
	char a[] = {"hello.world"};
	char *b;

	b = ft_strstr(a, "Passed");
	if (b == (void *)0)
	ft_putstr ("Cannot find the line\n");
	else
	{
		ft_putstr("Line u r looking for is starting with sign: ");
		ft_putnbr(b - a + 1);
		ft_putchar('\n');
	}
	return (0);
}*/
