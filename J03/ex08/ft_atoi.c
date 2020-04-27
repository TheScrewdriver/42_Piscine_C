/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 09:08:53 by rbroque           #+#    #+#             */
/*   Updated: 2020/04/27 17:40:21 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *c)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (c[i] != '\0' && ((c[i] - 48 <= 9 && c[i] - 48 >= 0) || c[i] == '-'))
	{
		if (c[i] == '-')
		{
			if (c[0] == '-' && c[i + 1] != '\0')
			{
				i++;
				sign = -1;
			}
			else
				return (result * sign);
		}
		result = result * 10 + c[i] - '0';
		i++;
	}
	return (result * sign);
}
