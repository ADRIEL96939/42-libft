/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:17:38 by aoswald           #+#    #+#             */
/*   Updated: 2024/07/01 21:26:30 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	substr;
	size_t	i;
	size_t	strlen;

	i = 0;
	strlen = ft_strlen(s);
	substr = 0;
	if (!s)
		return (NULL);
	if (start > strlen)
		len = 0;
	if (len > (strlen - start))
		len = strlen - start;
	dst = malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (i < len && s[start + i])
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
#include <stdio.h>
int main(void)
{
    char const *str = "Helloworld!";
    unsigned int start = 7;
    size_t        len = 5;

    char *substring = ft_substr(str, start, len);
    printf("Substring: %s\n", substring);
    free(substring);
    return (0);
}
*/
