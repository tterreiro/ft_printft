/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:20:27 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/21 11:02:17 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static int	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		if (s[i] && s[i] == c)
			i++;
	}
	return (words);
}

static int	count_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*split_words(char const *s, char c)
{
	size_t	i;
	size_t	word_len;
	char	*word;

	word_len = count_word_len(s, c);
	word = malloc(sizeof(char) * (word_len + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < word_len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tmp;
	size_t	i;
	size_t	j;
	size_t	word_count;

	word_count = count_words(s, c);
	tmp = malloc(sizeof(char *) * (word_count + 1));
	if (tmp == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < word_count)
	{
		while (s[i] == c)
			i++;
		tmp[j] = split_words(s + i, c);
		if (tmp[j] == NULL)
			return (free_split(tmp));
		while (s[i] && s[i] != c)
			i++;
		j++;
	}
	tmp[j] = NULL;
	return (tmp);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	char const *s = "AAAAAAAAAHelloAAAAAAAAAAWorldAAAAAAAAAAAAAAA";
	char **split = ft_split(s, 'A');
	if (argc == 2)
	{
		int	num = atoi(argv[1]);
		printf("%s", split[num]);
	}
	free_split(split);
}*/