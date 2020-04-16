/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 23:28:15 by rbroque           #+#    #+#             */
/*   Updated: 2020/04/16 02:06:52 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_list3(char u, char d, char t)
{
	ft_putchar(u);
	ft_putchar(d);
	ft_putchar(t);
	if (u * t - d * u != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int		p;
	int		d;
	int		t;

	p = '0';
	while (p <= '7')
	{
		d = p + 1;
		while (d <= '8')
		{
			t = d + 1;
			while (t <= '9' && t != d)
			{
				ft_list3(p, d, t);
				t++;
			}
			d++;
		}
		p++;
	}
}
