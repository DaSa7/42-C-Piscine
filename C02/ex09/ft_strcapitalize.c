/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:20:00 by dshutko           #+#    #+#             */
/*   Updated: 2022/11/23 11:19:53 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	a;
	int		b;

	i = 0;
	while (str[i] != '\0')
	{
		b = 1;
		if (i == 0)
			a = ';';
		else
			a = str[i - 1];
		if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
			b = 0;
		if (a >= '0' && a <= '9')
			b = 0;
		if (b == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if (b == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*int main()
{
    char str[] = "asdZXC dfgYvasd =fssf=+sd+ssdfgg6";
    ft_strcapitalize(str);
    ft_strcapitalize("");
    printf("%s", str);
}*/
