/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:42:29 by mide-sou          #+#    #+#             */
/*   Updated: 2022/03/11 15:48:43 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_esquerda_direita(char const *s1, char const *set)
{
	int	iset;
	int	i;
	int	def;

	iset = 0;
	i = 0;
	def = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != set[iset])
			break ;
		iset++;
		i++;
		if ((size_t)iset == ft_strlen(set))
		{
			def = i;
			iset = 0;
		}
	}
	return (def);
}

static int	ft_direita_esquerda(char const *s1, char const *set)
{
	int	iset;
	int	i;
	int	def;

	i = (int)ft_strlen(s1) - 1;
	def = i;
	iset = (int)ft_strlen(set) - 1;
	while (i >= ft_esquerda_direita(s1, set))
	{
		if (s1[i] != set[iset])
			break ;
		iset--;
		i--;
		if (iset < 0)
		{
			def = i;
			iset = (int)ft_strlen(set) - 1;
		}
	}
	return (def);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		dir;
	int		esq;
	char	*ptr;

	if (!s1)
		return (NULL);
	esq = ft_esquerda_direita(s1, set);
	dir = ft_direita_esquerda(s1, set);
	ptr = (char *)malloc((ft_strlen(s1) - esq - dir - 2) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (esq <= dir)
	{
		ptr[i] = s1[esq];
		i++;
		esq++;
	}
	return (ptr);
}
/*int   main(void)
{
    char    *str1 = "abcabola"; //27
    char    *str2 = "abc"; //18
    char    *dest;
    dest = ft_strtrim(str1, str2);
    printf("%s", dest);
}*/
