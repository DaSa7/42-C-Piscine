/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:49:01 by dshutko           #+#    #+#             */
/*   Updated: 2022/11/22 18:06:41 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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
    result = ft_str_is_alpha("dklf");
    printf("Result: %d\n", result);
    result = ft_str_is_alpha("QWERTY");
    printf("Result: %d\n", result);
    result = ft_str_is_alpha("cxff124");
    printf("Result: %d\n", result);
    result = ft_str_is_alpha("42");
    printf("Result: %d\n", result);
    result = ft_str_is_alpha("");
    printf("Result: %d\n", result);
    return 0;
}*/
