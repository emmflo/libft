/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflorenz <eflorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 23:09:49 by eflorenz          #+#    #+#             */
/*   Updated: 2016/11/07 23:10:44 by eflorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*res;

	res = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = (*f)(s[i]);
		i++;
	}
	return (res);
}
