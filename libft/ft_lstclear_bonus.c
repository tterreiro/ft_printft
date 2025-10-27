/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:28:25 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/24 15:00:01 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*current;

	if (!lst)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}
/* #include <stdio.h>
int main(void)
{
    t_list  *list_head = NULL; 
    
    char *str_content = ft_strdup("HELLO WORLD!\n");
    char *str1_content = ft_strdup("HELLO !\n");
    char *str2_content = ft_strdup("WORLD!\n");

    t_list *new_node = ft_lstnew(str_content);
    t_list *new_node1 = ft_lstnew(str1_content);
    t_list *new_node2 = ft_lstnew(str2_content);

    ft_lstadd_front(&list_head, new_node);
    ft_lstadd_front(&list_head, new_node1);
    ft_lstadd_front(&list_head, new_node2);
    
    printf("First node content: %s\n", (char *)list_head->content);

	t_list *last_node = ft_lstlast(list_head);
	printf("Last node content: %s\n", last_node->content);

	printf("Size: %d\n", ft_lstsize(list_head));

    printf("Starting list clear...\n");

    ft_lstclear(&list_head, free);

    if (list_head) 
        printf("Node content: %s", (char *)list_head->content);
    else
        printf("List is now empty (list_head is NULL).\n");

    printf("List and all content successfully deleted.\n");
    return(0);
}
*/