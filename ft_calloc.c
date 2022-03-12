/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:20:03 by mide-sou          #+#    #+#             */
/*   Updated: 2022/03/08 16:20:05 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}

/* int	main(void)
{
	void	*ptr;
	int		i;
	i = 0;
	ptr = ft_calloc(5, sizeof(char));
	while (i < 79)
	{
		printf("%d ", *(int *)ptr);
		ptr += sizeof(char);
		i++;
	}
} */