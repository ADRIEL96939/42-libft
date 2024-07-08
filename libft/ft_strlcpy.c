/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:23:56 by aoswald           #+#    #+#             */
/*   Updated: 2024/07/03 17:40:00 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (*(src + i) && (i + 1) < dstsize)
		{
			*(dst + i) = *(src + i);
			i++;
		}
		*(dst + i) = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
int main()
{
	char	a[10] = "habis";
	size_t		c;
	size_t		d;
	size_t 	len = sizeof(a) - 1;
	char	dst[len + 1];
	char	dst2[4];

	c = ft_strlcpy(dst,a,len);
	d = ft_strlcpy(dst2,a,sizeof(dst2));
	printf("Original: %s\n",a);
	printf("Result1: %s\n",dst);
	printf("Result2: %s\n",dst2);
}
*/
