/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 11:08:38 by rbroque           #+#    #+#             */
/*   Updated: 2020/04/30 12:02:46 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int n)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = 1;
	if (n <= 12 && n >= 0)
	{
		while (i < n)
		{
			i++;
			tmp = i * tmp;
		}
		n = tmp;
		return (n);
	}
	else
		return (0);
}
