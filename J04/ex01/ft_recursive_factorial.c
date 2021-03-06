/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 12:08:15 by rbroque           #+#    #+#             */
/*   Updated: 2020/05/03 17:25:20 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int n)
{
	if (n <= 12 && n - 1 >= 0)
	{
		n *= ft_recursive_factorial(n - 1);
		return (n);
	}
	if (n == 0)
		return (1);
	return (0);
}
