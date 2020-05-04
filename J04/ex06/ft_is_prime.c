/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 17:01:58 by rbroque           #+#    #+#             */
/*   Updated: 2020/05/04 21:56:47 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int		ft_is_prime(int nb)
{
	int		divise;

	divise = 2;
	if (nb <= 1 || nb > INT_MAX)
		return (0);
	while (nb % divise != 0 && divise + 1 < nb)
		divise++;
	if (nb % divise == 0)
		return (0);
	return (1);
}
