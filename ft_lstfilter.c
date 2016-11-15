#include "libft.h"

void	ft_lstinplacefilter(t_list **lst, void (*f)(t_list *elem), void (*del)(void *, size_t))
{
	t_list	*prev;
	t_list	*elem;
	t_list	*next;

	if (lst == NULL || f == NULL || del == NULL)
		return ;
	prev = NULL;
	elem = *lst;
	next = NULL;
	while (elem != NULL)
	{
		next = elem->next;
		if (!(*f)(elem))
		{
			if (prev == NULL)
				*lst = next;
			else
				prev->next = next;
			ft_lstdelone(&elem, del);
		}
		else
			prev = elem;
		elem = next;
	}
}
