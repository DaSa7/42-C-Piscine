/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:35:00 by dshutko           #+#    #+#             */
/*   Updated: 2022/11/22 19:36:56 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
    result = ft_str_is_uppercase("jdfhk");
    printf("Result: %d\n", result);
    result = ft_str_is_uppercase("FHDHF");
    printf("Result: %d\n", result);
    result = ft_str_is_uppercase("afddf1354");
    printf("Result: %d\n", result);
    result = ft_str_is_uppercase("9589099");
    printf("Result: %d\n", result);
    result = ft_str_is_uppercase("");
    printf("Result: %d\n", result);
    return 0;
}*/
