/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:10:56 by aoswald           #+#    #+#             */
/*   Updated: 2024/07/01 21:32:44 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The calloc() function contiguously allocates enough space for count
//      objects that are size bytes of memory each and returns a pointer to the
//      allocated memory.  The allocated memory is filled with bytes of value
//      zero.
// return a pointer to allocated memory.  If there
//      is an error, they return a NULL pointer

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;

	if (size && count && UINT_MAX / count < size)
		return (NULL);
	dst = malloc(count * size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, count * size);
	return (dst);
}

/*
#include <stdio.h>

int	main(void) {
	int *arr = (int *)ft_calloc(5, sizeof(int));

	for (int i = 0; i < 5; i++) {
		arr[i] = i * 10;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
	return (0);
}
*/