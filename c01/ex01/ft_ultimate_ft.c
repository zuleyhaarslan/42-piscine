/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuarslan <zuarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:07:13 by zuarslan          #+#    #+#             */
/*   Updated: 2024/02/15 15:28:06 by zuarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}

#include <stdio.h>
int main()
{
	int a=5;
	int *b=&a;
	int **c=&b;
	

	ft_ultimate_ft(&c);
	printf("%d", **c);


}