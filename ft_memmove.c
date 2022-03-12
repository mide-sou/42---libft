/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <mide-sou@42.student.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:54:06 by mide-sou          #+#    #+#             */
/*   Updated: 2022/03/08 14:49:23 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/* int main()
{
    char str1[] = "Geeks"; // Array of size 100
    char str2[] = "Qui"; // Array of size 5
  
    puts("str1 before memmove ");
    puts(str1);
  
    // Copies contents of str2 to sr1
    ft_memmove(str1, str2, 2);
    //memmove(str1, str2, 2);
  
    puts("\nstr1 after memmove ");
    puts(str1);
  
    return 0;
} */
