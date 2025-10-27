/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:52:21 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/24 16:30:59 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* 
void	print_tolower(void *content)
{
	char	*str = content;
	size_t	i;

	i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char *str_content = ft_strdup("HELLO WORLD!\n");

    t_list *new_node = ft_lstnew(str_content);
	
	ft_lstiter(new_node, print_tolower);
}
 */