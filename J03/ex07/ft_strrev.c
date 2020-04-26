/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 01:42:09 by rbroque           #+#    #+#             */
/*   Updated: 2020/04/27 01:15:45 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	temp;

	len = 0;
	i = 0;
	while (str[len] != '\0')
		len++;
	len--;
	while (i < len)
	{
		temp = str[len];
		str[len] = str[i];
		str[i] = temp;
		len--;
		i++;
	}
	return (str);
}
