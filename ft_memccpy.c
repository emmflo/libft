/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflorenz <eflorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 23:07:45 by eflorenz          #+#    #+#             */
/*   Updated: 2016/11/08 20:40:42 by eflorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int		i;

	if (dest == NULL || src == NULL || n == 0)
		return (NULL);
	i = 0;
	while (i < (int)n && ((unsigned char*)src)[i] != (unsigned char)c)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i++;
	}
	if (i < (int)n && ((unsigned char*)src)[i] == (unsigned char)c)
		return (&((unsigned char*)dest)[i + 1]);
	else
		return (NULL);
}
