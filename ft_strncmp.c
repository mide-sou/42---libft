/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:51:59 by mide-sou          #+#    #+#             */
/*   Updated: 2022/03/08 14:42:27 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && n > 0)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
		n--;
	}
	if (s1[i] != s2[i] && n > 0)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return (0);
}

/* int main() {
  char s1[] = "abcd", s2[] = "abCd", str3[] = "abcd";
  int result;

  // comparing strings s1 and s2
  result = ft_strncmp(s1, s2, 10);
  printf("strcmp(s1, s2) = %d\n", result);

  // comparing strings s1 and str3
  result = ft_strncmp(s1, str3, 10);
  printf("strcmp(s1, str3) = %d\n", result);

  return 0;
} */
