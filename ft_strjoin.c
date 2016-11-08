/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflorenz <eflorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 23:09:40 by eflorenz          #+#    #+#             */
/*   Updated: 2016/11/07 23:16:02 by eflorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len_s1;

	len_s1 = ft_strlen(s1);
	str = ft_strnew(len_s1 + ft_strlen(s2));
	ft_strcpy(str, s1);
	ft_strcpy(str + len_s1, s2);
	return (str);
}
