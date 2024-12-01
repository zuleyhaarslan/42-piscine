/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuarslan <zuarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:21:19 by zuarslan          #+#    #+#             */
/*   Updated: 2024/02/15 15:43:24 by zuarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		n = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = n;
		i++;
	}
}

#include <stdio.h>
int main(){
	int tab[]={1, 2, 3, 4};
	ft_rev_int_tab(tab, 4);
	for(int i=0; i<4; i++)
	{
		printf("%d", tab[i]);
	}
}