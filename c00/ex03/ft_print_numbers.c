/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuarslan <zuarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:07:43 by zuarslan          #+#    #+#             */
/*   Updated: 2024/02/08 16:15:16 by zuarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c ;

	c = '0' ;
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}
