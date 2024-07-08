/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:23:44 by aoswald           #+#    #+#             */
/*   Updated: 2024/06/30 22:25:10 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	initial_dst_length;
	size_t	dst_length;

	j = 0;
	if ((dst == NULL || src == NULL) && dstsize == 0)
		return (0);
	initial_dst_length = ft_strlen(dst);
	dst_length = initial_dst_length;
	if (dstsize < initial_dst_length + 1)
		return (ft_strlen(src) + dstsize);
	if (dstsize > initial_dst_length + 1)
	{
		while (src[j] && ((dst_length + 1) < dstsize))
			dst[dst_length++] = src[j++];
		dst[dst_length] = '\0';
	}
	return (ft_strlen(src) + initial_dst_length);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char	*STRING_1 = "the cake is a lie !\0I'm hidden lol\r\n";
	char	*str = STRING_1;
	char	buff1[28] = "there is no stars in the sky";
	char	buff2[28] = "there is no stars in the sky";
	int		max = strlen(STRING_1) + 4;
	int		r1 = strlcat(buff1, str, max);
	int		r2 = ft_strlcat(buff2, str, max);
	printf("Result of strlcat %s\n",buff1);
	printf("Result of ft_strlcat %s\n",buff2);
	printf("Result of strlcat %i\n",r1);
	printf("Result of ft_strlcat %i\n",r2);
}
*/