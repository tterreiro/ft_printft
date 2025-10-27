/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:06:51 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/27 15:37:19 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/* 
void    *map_tolower(void *content)
{
    char    *original_str;
    char    *new_str;
    int     i;

    if (!content)
        return (NULL);
    
    original_str = (char *)content;
    new_str = ft_strdup(original_str); 
    if (!new_str)
        return (NULL); 
    i = 0;
    while (new_str[i])
    {
        new_str[i] = ft_tolower(new_str[i]);
        i++;
    }
    return ((void *)new_str);
}

int	main(void)
{
    char *str_content = ft_strdup("HELLO WORLD!\n");

    t_list *new_node = ft_lstnew(str_content);

	printf("Before: %s", (char *)new_node->content);
	t_list *mapped_list = ft_lstmap(new_node, map_tolower, free);
	printf("After: %s", (char *)mapped_list->content);
} 
 */

/*t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;
	t_list	*changed_content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		changed_content = f(lst->content);
		new_node = ft_lstnew(changed_content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			free(changed_content);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}*/