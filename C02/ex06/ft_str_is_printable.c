/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:37:42 by dshutko           #+#    #+#             */
/*   Updated: 2022/11/22 19:40:23 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
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
    result = ft_str_is_printable("jsghj");
    printf("Result: %d\n", result);
    result = ft_str_is_printable("FNDJG");
    printf("Result: %d\n", result);
    result = ft_str_is_printable("ashdf1484~");
    printf("Result: %d\n", result);
    result = ft_str_is_printable("4242");
    printf("Result: %d\n", result);
    result = ft_str_is_printable("");
    printf("Result: %d\n", result);
 return(0);
}*/
