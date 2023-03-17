/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:46:40 by dshutko           #+#    #+#             */
/*   Updated: 2022/12/08 19:24:46 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			len++;
		j = 0;
		while (sep[j++] && i < size -1)
			len++;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*r_str;
	int		i;
	int		j;
	int		len;
	int		h;

	len = ft_total_length (size, strs, sep);
	r_str = malloc(len + 1);
	if (!r_str)
		return (NULL);
	i = 0;
	h = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			r_str[h++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size -1)
			r_str[h++] = sep[j++];
		i++;
	}
	r_str[h] = '\0';
	return (r_str);
}

/*int	main(void)
{
	char	*tab[4];
	tab[0] = " ";
	tab[1] = " ";
	tab[2] = " ";
	tab[3] = " ";
	printf("%s", ft_strjoin(4, tab, "ifuckingquit"));
	return (0);
}*/
