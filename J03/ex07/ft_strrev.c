/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 01:42:09 by rbroque           #+#    #+#             */
/*   Updated: 2020/04/26 21:52:06 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	temp;

	
	len = 0;
	i = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	while (len > 0)
	{
		temp = str[len]
		str[i] = str[len];
		len--;
		i++;
	}
	return (str);
}

int		main(void)
{
	ft_strrev("Bonjour");
	ft_putchar('h');
	return(0);
}
