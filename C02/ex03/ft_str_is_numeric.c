/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:07:22 by dshutko           #+#    #+#             */
/*   Updated: 2022/11/22 18:10:50 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
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
    result = ft_str_is_numeric("sjvf");
    printf("Result: %d\n", result);
    result = ft_str_is_numeric("HRTY");
    printf("Result: %d\n", result);
    result = ft_str_is_numeric("dfhf1234");
    printf("Result: %d\n", result);
    result = ft_str_is_numeric("055959");
    printf("Result: %d\n", result);
    result = ft_str_is_numeric("");
    printf("Result: %d\n", result);
    return 0;
}*/
