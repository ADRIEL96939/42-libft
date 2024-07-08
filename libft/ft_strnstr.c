/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:44:26 by aoswald           #+#    #+#             */
/*   Updated: 2024/06/30 20:52:37 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (haystack == NULL || needle == NULL)
		return (NULL);
	if (!ft_strlen(needle))
		return ((char *)haystack);
	while (haystack[i] && len--)
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
		if (needle[j] != '\0')
			return ((char *)&haystack[i - j]);
	}
	return (NULL);
}
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack && len == 0)
		return (NULL);
	if (!ft_strlen(needle))
		return ((char *)&haystack[i]);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (!needle[j + 1])
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int main (void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
	ptr = ft_strnstr(largestring, smallstring, 4);
	printf("%s\n", ptr);

	char	*s1 = "oh no not the empty string !";
	char	*s2 = "";
	size_t	max = 0;

	char	*i1 = strnstr(s1, s2, max);
	char	*i2 = ft_strnstr(s1, s2, max);
	ft_strnstr(NULL, "fake", 0);
	printf("%s\n", i1);
	printf("%s\n", i2);
	
	char	*s1 = "see FF your FF return FF now FF";
	char	*s2 = "FF";
	
	printf("%s\n", ft_strnstr(s1, s2, ft_strlen(s1)));
	printf("%s\n", strnstr(s1, s2, ft_strlen(s1)));
	*/
