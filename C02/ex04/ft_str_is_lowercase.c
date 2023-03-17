/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:11:22 by dshutko           #+#    #+#             */
/*   Updated: 2022/11/22 19:13:40 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
    int result;
    result = ft_str_is_lowercase("sjgjf");
    printf("Result: %d\n", result);
    result = ft_str_is_lowercase("YYUSS");
    printf("Result: %d\n", result);
    result = ft_str_is_lowercase("xjhdf654");
    printf("Result: %d\n", result);
    result = ft_str_is_lowercase("56435");
    printf("Result: %d\n", result);
    result = ft_str_is_lowercase("");
    printf("Result: %d\n", result);
    return 0;
}*/
