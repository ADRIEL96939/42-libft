/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 19:55:41 by aoswald           #+#    #+#             */
/*   Updated: 2024/06/30 22:20:02 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_count(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	str_count;

	i = 0;
	count = 0;
	str_count = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		if (s[i] == c)
		{
			if (count > 0)
			{
				str_count++;
				count = 0;
			}
		}
		i++;
	}
	if (count > 0)
		return (++str_count);
	return (str_count);
}

static char const	*get_pointer(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		if (s[i] == c)
			if (count > 0)
				return (&s[i]);
		i++;
	}
	return (&s[i]);
}

static char const	*position_s(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] == c)
		i++;
	return (&s[i]);
}

static void	free_str(char **dst, size_t i)
{
	while (i-- > 0)
		free(dst[i]);
	free(dst);
}

char	**ft_split(char const *s, char c)
{
	char		**dst;
	char const	*x;
	size_t		*index;

	if (!s)
		return (NULL);
	index = (size_t[3]){0, 0, get_count(s, c)};
	dst = malloc(sizeof(char *) * (index[2] + 1));
	if (!dst)
		return (NULL);
	dst[index[2]] = NULL;
	x = s;
	while (index[0] != index[2])
	{
		s = position_s(s, c);
		x = get_pointer(x, c);
		dst[index[0]] = malloc((x - s + 1) * sizeof(char));
		if (!dst[index[0]])
			return (free_str(dst, index[0]), NULL);
		index[1] = 0;
		while (s != x)
			dst[index[0]][index[1]++] = *s++;
		dst[index[0]++][index[1]] = '\0';
	}
	return (dst);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*b;
	char	**a;

	b = "cccccccab";
	printf("Original string is %s\n", b);
	a = ft_split(b, 'c');
	printf("%s\n", a[0]);
	printf("%s\n", a[1]);
	printf("%s\n", a[2]);
	printf("%s\n", a[3]);
}
*/