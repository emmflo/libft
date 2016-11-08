/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflorenz <eflorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 23:09:44 by eflorenz          #+#    #+#             */
/*   Updated: 2016/11/07 23:09:45 by eflorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t size;
	size_t start;

	start = ft_strlen(dst);
	size = start + ft_strlen(src);
	dst = &dst[start];
	while (*(src) != '\0' && n-- > (start + 1))
		*(dst++) = *(src++);
	*dst = '\0';
	return (size);
}
