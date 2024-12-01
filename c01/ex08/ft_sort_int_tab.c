/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuarslan <zuarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:27:01 by zuarslan          #+#    #+#             */
/*   Updated: 2024/02/15 15:48:09 by zuarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				n = tab[i];
				tab[i] = tab[j];
				tab[j] = n;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

#include <stdio.h>
int main(){
	int tab[]={1, 5, 9, 2};
	ft_sort_int_tab(tab, 4);
	for(int i=0; i<4; i++)
	{
		printf("%d", tab[i]);
	}
}