/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:53:17 by aoswald           #+#    #+#             */
/*   Updated: 2024/06/30 22:25:09 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters s1: The prefix string. s2: The suffix string.
Return value The new string. NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a newstring,
	which is the result of the concatenation
of ’s1’ and ’s2’.
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	dst = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * (sizeof(char)));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, ft_strlen(s1) + 1);
	ft_strlcat(dst, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (dst);
}
/*
#include <stdio.h>
int main()
{
	char	s1[28] = "there is no stars in the sky";
	char	s2[28] = "there is no stars in the sky";

	char *r = ft_strjoin(s1, s2);
	printf("Result is %s\n",r);
}
*/