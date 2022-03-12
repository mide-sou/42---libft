/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:56:38 by mide-sou          #+#    #+#             */
/*   Updated: 2022/03/08 16:56:40 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	p;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s) + 1;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = start;
	p = 0;
	while (i < ft_strlen(s) && p < len)
		ptr[p++] = s[i++];
	ptr[p] = '\0';
	return (ptr);
}

/* int	main(void)
{
	char const			*string = "o pai ta on tipo neymar.";
	char				*ptr;
	int					cont;
	unsigned int		go;
	size_t				len;
	cont = 1;
	go = 2;
	len = 10;
	printf("\ninput:\n");
	printf("\n");
	while (*string != '\0')
	{
		printf("%c", *(char *)string);
		string += sizeof(char);
		cont++;
	}
	string -= sizeof(char) * cont;
	ptr = ft_substr(string, go, len);
	printf("\n");
	printf("\nsubstring:\n");
	printf("\n");
	while (*ptr != '\0')
	{
		printf("%c", *(char *)ptr);
		ptr += sizeof(char);
		cont++;
	}
	printf("\n\n");
} */