/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 00:50:24 by rbroque           #+#    #+#             */
/*   Updated: 2020/04/23 00:56:49 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div(int *a, int *b)
{
	int temp;

	temp = (*a) % (*b);
	*a = (*a) / (*b);
	*b = temp;
}