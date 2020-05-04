/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 09:14:57 by rbroque           #+#    #+#             */
/*   Updated: 2020/05/04 16:12:48 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_sqrt(int nb)
{
	int		sqrt;

	sqrt = 0;
	if (nb > INT_MAX || nb < INT_MIN)
		return (0);
	while (sqrt * sqrt < nb && sqrt * sqrt != nb)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}
