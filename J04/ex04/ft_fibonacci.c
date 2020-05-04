/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 23:56:56 by rbroque           #+#    #+#             */
/*   Updated: 2020/05/04 09:33:28 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int		nb;

	if (index > INT_MAX)
		return (-1);
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	nb = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	if (nb > INT_MAX || nb < INT_MIN)
		return (-1);
	return ((nb < 0) ? -nb : nb);
}
