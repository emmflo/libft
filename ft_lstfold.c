#include "libft.h"

void	*ft_lstfold(t_list *lst, void *(*f)(void*, void*))
{
	t_list	*elem;
	void	*value;

	if (lst == NULL || f == NULL)
		return (NULL);
	value = lst->content;
	elem = lst->next;
	while (elem != NULL)
	{
		value = (*f)(value, elem->content);
		elem = elem->next;
	}
	return (value);
}
