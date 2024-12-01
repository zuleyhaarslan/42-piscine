/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuarslan <zuarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:15:12 by zuarslan          #+#    #+#             */
/*   Updated: 2024/02/15 15:37:31 by zuarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n;
	int	m;

	n = *a / *b;
	m = *a % *b;
	*a = n;
	*b = m;
}

#include <stdio.h>
int main()
{
	int a=17;
	int b=5;

	ft_ultimate_div_mod(&a, &b);

	printf("%d, %d", a, b);
}