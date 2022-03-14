/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:17:05 by mide-sou          #+#    #+#             */
/*   Updated: 2022/03/11 14:17:08 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	char	*str;
	size_t	numstrs;

	if (s == NULL)
		return (NULL);
	numstrs = count_words(s, c);
	new = (char **)malloc(sizeof(char *) * (numstrs + 1));
	if (new == NULL)
		return (NULL);
	str = (char *)s;
	while (*s)
	{
		if (*s == c)
		{
			if (str != s)
				*(new ++) = ft_substr(str, 0, s - str);
			str = (char *)s + 1;
		}
		s++;
	}
	if (str != s)
		*(new ++) = ft_substr(str, 0, s - str);
	*new = 0;
	return (new - numstrs);
}

/* size_t	main(void)
{
	char	*s = "abababc";
	char	**matrix;
	size_t		i;

	i = 0;
	matrix = ft_split(s, 'b');
	while (matrix[i])
	{
		printf("%s\n", matrix[i]);
		i++;
	}
} */