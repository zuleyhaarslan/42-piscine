/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuarslan <zuarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:02:00 by zuarslan          #+#    #+#             */
/*   Updated: 2024/02/08 16:04:54 by zuarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c ;

	c = 'a' ;
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++ ;
	}
}
