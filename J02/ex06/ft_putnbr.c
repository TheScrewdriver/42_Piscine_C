/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 15:36:24 by rbroque           #+#    #+#             */
/*   Updated: 2020/04/21 00:34:00 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		power(int a, int b)
{
	int		y;

	y = a;
	while (b != 1)
	{
		a = y * a;
		b--;
	}
	return (a);
}

void	ft_putnbr(int nb)
{
	int	dozens;
	int	n;

	dozens = 0;
	n = nb;
	while (n / 10 != 0)
	{
		dozens++;
		n = n / 10;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	n = nb;
	while (dozens != 0 && nb != 0)
	{
		ft_putchar((n / power(10, dozens)) + 48);
		n = n % (power(10, dozens));
		dozens--;
	}
	ft_putchar((nb % 10) + 48);
}
