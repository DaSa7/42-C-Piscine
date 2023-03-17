/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshutko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:38:26 by dshutko           #+#    #+#             */
/*   Updated: 2022/11/20 17:47:26 by dshutko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	sort;
	int	barr;

	i = 0;
	while (tab[i] != tab[size])
	{
		sort = i + 1;
		while (tab[sort] != tab[size])
		{
			if (tab[i] > tab[sort])
			{
				barr = tab[sort];
				tab[sort] = tab[i];
				tab[i] = barr;
			}
			++sort;
		}
		++i;
	}
}
