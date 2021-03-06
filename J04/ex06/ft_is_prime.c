/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 17:01:58 by rbroque           #+#    #+#             */
/*   Updated: 2020/05/04 22:20:37 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int		ft_is_prime(int nb)
{
	int		div;

	div = 2;
	if (nb <= 1 || nb > INT_MAX)
		return (0);
	while (nb % div != 0 && div + 1 < nb)
		div++;
	if (nb % div == 0)
		return (0);
	return (1);
}
