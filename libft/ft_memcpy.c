/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:21:58 by aoswald           #+#    #+#             */
/*   Updated: 2024/06/30 22:02:00 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src1;
	int		i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	dst1 = (char *)dst;
	src1 = (char *)src;
	while (len--)
	{
		dst1[i] = src1[i];
		i++;
	}
	return ((void *)dst1);
}
/*
#include <stdio.h>
int main() {
    char s1[] = "12345";
    char s2[] = "12";
    size_t n = 5; 

    char *found = (char *)ft_memcpy(s1 + 2, s1, n);

    if (found)
        printf("The copy is %s\n", found);
    return 0;
}
*/