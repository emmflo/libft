/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfilter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflorenz <eflorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 18:45:17 by eflorenz          #+#    #+#             */
/*   Updated: 2016/11/16 04:33:44 by eflorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfilter(t_list **lst, int (*f)(t_list *elem))
{
	t_list	*prev;
	t_list	*elem;
	t_list	*next;
	t_list	*start;

	if (lst == NULL || f == NULL)
		return (NULL);
	prev = NULL;
	elem = *lst;
	next = NULL;
	while (elem != NULL)
	{
		if ((*f)(elem))
		{
			next = ft_lstnew(elem->content, elem->content_size);
			if (start == NULL)
				start = next;
			if (prev != NULL)
				prev->next = next;
			prev = next;
		}
		elem = elem->next;
	}
	return (start);
}
