/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflorenz <eflorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 23:08:30 by eflorenz          #+#    #+#             */
/*   Updated: 2016/11/08 03:17:42 by eflorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	if (!(tmp = malloc(sizeof(unsigned char) * n)))
		return (NULL);
	i = 0;
	while (i < n)
	{
		tmp[i] = ((unsigned char*)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char*)dest)[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (dest);
}
