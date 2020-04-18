/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 11:45:05 by rbroque           #+#    #+#             */
/*   Updated: 2020/04/18 16:14:28 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_list4(int a, int b)
{
	ft_putchar((a / 10) + 48);
	ft_putchar((a % 10) + 48);
	ft_putchar(' ');
	ft_putchar((b / 10) + 48);
	ft_putchar((b % 10) + 48);
	if (a == 98 && b == 99)
	{
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int		first;
	int		second;

	first = 0;
	while (first < 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			if (second != first)
			{
				ft_list4(first, second);
			}
			second++;
		}
		first++;
	}
}
