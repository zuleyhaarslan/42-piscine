/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuarslan <zuarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:48:58 by zedogan           #+#    #+#             */
/*   Updated: 2024/01/31 15:28:38 by zuarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int a, char f, char m, char e)
{
	int	i;

	i = 1;
	while (i <= a)
	{
		if (i == 1)
			ft_putchar(f);
		else if (i == a)
			ft_putchar(e);
		else
			ft_putchar(m);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (j < y)
	{
		if (j == 0)
			print(x, 'A', 'B', 'A');
		else if (j == y - 1)
			print(x, 'C', 'B', 'C');
		else
			print(x, 'B', ' ', 'B');
		j++;
	}
}
