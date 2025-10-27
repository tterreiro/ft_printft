/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:15:15 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/23 16:15:15 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*listlast;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	listlast = ft_lstlast(*lst);
	listlast->next = new;
}
