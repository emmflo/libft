/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflorenz <eflorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 20:10:55 by eflorenz          #+#    #+#             */
/*   Updated: 2016/11/16 02:23:13 by eflorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_newarray(size_t n, size_t *dimensions, size_t content_size)
{
	size_t	s;
	size_t	i;
	void	*tab;

	s = content_size;
	i = 0;
	while (i < n)
		s *= dimensions[i++];
	if (!(tab = malloc(s)))
		return (NULL);
	return (tab);
}
