/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:35:50 by dshutko           #+#    #+#             */
/*   Updated: 2022/11/23 14:31:25 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{	
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}	
	return (dest);
}
/*int main ()
{ 
	char dest [7];
	char *src = "154";
	printf( "%s", ft_strncpy (dest, src, 3));
	printf ("\n");
}*/
