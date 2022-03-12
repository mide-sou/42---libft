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

static int	ft_numb_str(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			res++;
		}
		i++;
	}
	return (res + 1);
}

static int	ft_find_start(char const *str, char c, int index)
{
	int	i;

	i = index;
	while (str[i] != '\0' && str[i] != c)
	{	
		i++;
	}
	return (i);
}

static int	ft_find_len(char const *str, char c, int index)
{
	int	i;
	int	j;

	i = index;
	j = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
		j++;
	}
	if (str[i] == '\0')
		return (j);
	return (j + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;
	int		start;
	int		len;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	matrix = (char **)malloc(sizeof(char *) * (ft_numb_str(s, c)));
	if (!matrix)
		return (NULL);
	while (i < ft_numb_str(s, c))
	{
		len = ft_find_len(s, c, start);
		matrix[i] = ft_substr(s, start, len);
		start = ft_find_start(s, c, (start)) + 1;
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}

/*int	main(void)
{
	char	*s = "oaboaboabco";
	char	**matrix;
	int		i;

	i = 0;
	matrix = ft_split(s, 'o');
	while (matrix[i])
	{
		printf("%s\n", matrix[i]);
		i++;
	}
}*/