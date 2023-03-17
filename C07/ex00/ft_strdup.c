/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:44:25 by dshutko           #+#    #+#             */
/*   Updated: 2022/12/08 18:24:48 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src)

{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*str;
	char	*new_str;

	str = "hahahahaiquit";
	new_str = ft_strdup(str);
	printf("%s\n", new_str);
}*/
