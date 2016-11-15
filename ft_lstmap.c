/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflorenz <eflorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 02:56:36 by eflorenz          #+#    #+#             */
/*   Updated: 2016/11/10 02:53:10 by emmflo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*next;
	t_list	*prev;

	prev = NULL;
	start = NULL;
	while (lst != NULL)
	{
		next = (*f)(lst);
		if (start == NULL)
			start = next;
		if (prev != NULL)
			prev->next = next;
		prev = next;
		lst = lst->next;
	}
	return (start);
}
