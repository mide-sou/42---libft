/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:08:04 by mide-sou          #+#    #+#             */
/*   Updated: 2022/03/08 14:44:16 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = strlen(src);
	i = 0;
	if (dstsize > 0 && i < (dstsize - 1))
	{
		while (i < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
	}
	if (i == dstsize && i != 0)
		dst[i - 1] = '\0';
	else if (dstsize != 0)
		dst[i] = '\0';
	return (srclen);
}

/* void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19] = "ola eu soy";
    int r;

    r = ft_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
    //test(25);
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
} */
