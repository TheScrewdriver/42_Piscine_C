/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 19:20:54 by rbroque           #+#    #+#             */
/*   Updated: 2020/04/30 01:43:43 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		tmp;
	int		complete;

	complete = 1;
	i = 0;
	while (complete != 0)
	{
		if (tab[i] > tab[i + 1] && i + 1 < size)
		{
			tmp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = tmp;
			complete++;
		}
		if (i == size - 1 && complete == 1)
			complete = 0;
		else if (i == size - 1)
		{
			i = 0;
			complete = 1;
		}
		else if (i < size && complete != 0)
			i++;
	}
}
