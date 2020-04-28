/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 09:08:53 by rbroque           #+#    #+#             */
/*   Updated: 2020/04/28 11:44:07 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (*str == ' ' || (*str >= 8 && *str <= 13))
		str++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
	return (result = (str[0] == '-')? -result : result);
}

int		main(void)
{
	char	c[] = "872389692662894696878778473948878923472307";
	
	printf("%d",ft_atoi(c));
	printf("%s", "\n");
	printf("%d",  atoi(c));
	return (0);
}
