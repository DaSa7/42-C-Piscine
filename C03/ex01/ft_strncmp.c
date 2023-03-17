/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:04:05 by dshutko           #+#    #+#             */
/*   Updated: 2022/11/26 16:50:06 by dshutko          ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n - 1 && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (!(s1[i] == s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		++i;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char str1[] = {"12345"};
	char str2[] = {"12345"};

	if (ft_strncmp(str1,str2, 5) == 0)
	{	ft_putstr("same");
		return (0);}
	else{
		ft_putstr("diff");
		return (0);}
}*/
