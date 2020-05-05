/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 22:11:20 by rbroque           #+#    #+#             */
/*   Updated: 2020/05/05 10:07:00 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int		ft_find_next_prime(int nb)
{
	if (nb >= INT_MAX)
		return (0);
	if (nb == 1 || nb < 0)
		return (2);
	if (nb % 2 == 0 && nb != 2)
		return (ft_find_next_prime(nb + 1));
	if (nb % 3 == 0 && nb != 3)
		return (ft_find_next_prime(nb + 1));
	if (nb % 5 == 0 && nb != 5)
		return (ft_find_next_prime(nb + 1));
	if (nb % 7 == 0 && nb != 7)
		return (ft_find_next_prime(nb + 1));
	return (nb);
}
