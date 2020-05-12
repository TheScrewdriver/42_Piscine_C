/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 11:38:27 by rbroque           #+#    #+#             */
/*   Updated: 2020/05/12 23:30:20 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
}

char *ft_strcpy(char *dest, char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}

int		main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);
	printf("%s", ft_strcpy(argv[argc],argv[argc - 1] ));
	printf("%c", '\n');
	ft_putstr(argv[argc]);
	printf("%c", '\n');
	ft_putstr(argv[argc - 1]);
	
	return (0);
}
