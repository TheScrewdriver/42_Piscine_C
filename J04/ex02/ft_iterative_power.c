/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 21:16:33 by rbroque           #+#    #+#             */
/*   Updated: 2020/05/03 17:02:22 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		tmp;

	tmp = nb;
	if (power == 0)
		return (1);
	if (power > 0)
	{
		while (power != 1)
		{
			nb = tmp * nb;
			power--;
		}
		return (nb);
	}
		return (0);
}
