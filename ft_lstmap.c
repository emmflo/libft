/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflorenz <eflorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 02:56:36 by eflorenz          #+#    #+#             */
/*   Updated: 2016/11/08 03:22:58 by eflorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*nelem;
	t_list	*pelem;

	pelem = NULL;
	start = NULL;
	while (lst != NULL)
	{
		nelem = (*f)(lst);
		if (start == NULL)
			start = nelem;
		if (pelem != NULL)
			pelem->next = nelem;
		pelem = nelem;
		lst = lst->next;
	}
	return (start);
}
