/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfilter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflorenz <eflorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 18:45:17 by eflorenz          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2016/11/16 04:33:44 by eflorenz         ###   ########.fr       */
=======
/*   Updated: 2016/11/16 16:29:14 by emmflo           ###   ########.fr       */
>>>>>>> 6228ccc2084020c72428ba4b5a6e50717bf6e9a3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfilter(t_list *lst, int (*f)(t_list *elem))
{
	t_list	*prev;
	t_list	*next;
	t_list	*start;

	if (lst == NULL || f == NULL)
		return (lst);
	prev = NULL;
	next = NULL;
	start = NULL;
	while (lst != NULL)
	{
		if ((*f)(lst))
		{
			next = ft_lstnew(lst->content, lst->content_size);
			if (start == NULL)
				start = next;
			if (prev != NULL)
				prev->next = next;
			prev = next;
		}
		lst = lst->next;
	}
	return (start);
}
