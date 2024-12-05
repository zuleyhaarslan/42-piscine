/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuarslan <zuarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:20:49 by zuarslan          #+#    #+#             */
/*   Updated: 2024/02/15 17:40:57 by zuarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
	return (0);
}

#include <stdio.h>
int main(){
	char s1[]="Merhaba";
	char
}