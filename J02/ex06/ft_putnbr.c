/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 15:36:24 by rbroque           #+#    #+#             */
/*   Updated: 2020/04/24 23:46:39 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	power(int a, int b)
{
	int	y;

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
	int		decades;
	long	nbr;
	long	n;

	decades = 0;
	nbr = nb;
	n = nbr;
	while (n / 10 != 0)
	{
		decades++;
		n = n / 10;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	n = nbr;
	while (decades != 0 && nbr != 0)
	{
		ft_putchar((n / power(10, decades)) + 48);
		n = n % (power(10, decades));
		decades--;
	}
	ft_putchar((nbr % 10) + 48);
}
