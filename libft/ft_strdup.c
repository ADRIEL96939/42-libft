/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:45:53 by aoswald           #+#    #+#             */
/*   Updated: 2024/06/30 22:21:34 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	char	*s2;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1) + 1;
	s2 = (char *)s1;
	dst = malloc(len * sizeof(char));
	if (!dst)
		return (NULL);
	while (len > 0)
	{
		dst[i] = s2[i];
		i++;
		len--;
	}
	dst[i] = '\0';
	return (dst);
}

/*
#include <stdio.h>
int main() {
    char *original_str = "Hello world";
    char *duplicated_str;

    duplicated_str = ft_strdup(original_str);

    if (!duplicated_str) {
        printf("Fail\n");
        return 1;
    }
    printf("Original string: %s\n", original_str);
    printf("Duplicated string: %s\n", duplicated_str);

    free(duplicated_str);

    return 0;
}
*/