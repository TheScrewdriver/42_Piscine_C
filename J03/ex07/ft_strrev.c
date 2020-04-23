/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <romannbroque@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 01:42:09 by rbroque           #+#    #+#             */
/*   Updated: 2020/04/23 17:31:56 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		length;
	char	*temp;

	length = 0;
	while (*str)
	{
		str++;
		length++;
	}
	while (length >= 0)
	{
		temp = temp + *str;
		length--;
	}
	str = temp;
	return (str);
}
