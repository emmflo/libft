/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflorenz <eflorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 23:07:45 by eflorenz          #+#    #+#             */
/*   Updated: 2016/11/08 06:30:14 by eflorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tmp_dest;

	tmp_dest = (unsigned char*)dest;
	while (n-- > 0 && *(unsigned char*)(src) != (unsigned char)c)
		*(tmp_dest++) = *(unsigned char*)(src++);
	if (*(unsigned char*)(src) == (unsigned char)c)
		return (++tmp_dest);
	else
		return (NULL);
}
