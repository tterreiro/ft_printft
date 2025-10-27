/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:04:06 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/21 15:31:37 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	size_malloc;

	size_malloc = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size_malloc / size != nmemb)
		return (NULL);
	ptr = malloc(size_malloc);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size_malloc);
	return (ptr);
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	char *p;
	p = ft_calloc(-5, 3);
	strcpy(p, "abcd");
	printf("%s", p);
	free (p);
}*/