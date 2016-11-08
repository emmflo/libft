/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflorenz <eflorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 00:15:22 by eflorenz          #+#    #+#             */
/*   Updated: 2016/11/08 17:13:32 by eflorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*rev(char *buf, size_t size, int neg)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!(str = ft_strnew(size + neg)))
		return (NULL);
	size--;
	if (neg)
		str[i++] = '-';
	while (i <= (size + neg))
	{
		str[i] = buf[size - i + neg];
		i++;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int		neg;
	char	buf[11];
	int		i;

	neg = 0;
	if (n < 0)
	{
		if (n - 1 > 0)
			return (ft_strdup("-2147483648"));
		n = -n;
		neg = 1;
	}
	else if (n == 0)
		return ("0");
	i = 0;
	while (n > 0)
	{
		buf[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	buf[i] = '\0';
	return (rev(buf, i, neg));
}
