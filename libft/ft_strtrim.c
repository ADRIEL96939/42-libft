/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:14:25 by aoswald           #+#    #+#             */
/*   Updated: 2024/07/07 16:45:07 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*
#include <stdio.h>

int	main(void) {
	char str[] = "cbThiscb is a stringcb";
	char const *set = "cb";
	char *trimmed_str = ft_strtrim(str, set);
	printf("Original string: %s\n", str);
	printf("Trimmed string: %s\n", trimmed_str);
	free(trimmed_str);

	return (0);
}
*/
