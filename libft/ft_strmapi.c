/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:31:19 by aoswald           #+#    #+#             */
/*   Updated: 2024/06/19 19:11:19 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** char	ft_toupper(char c)
** {
** 	if (c >= 'a' && c <= 'z')
** 		return (c -32);
** 	else
** 		return (c);
** }
**
** char	ft_toupperwrapper(unsigned int i, char c)
** {
** 	(void)i;
** 	return(ft_toupper(c));
** }
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*dst;

	if (!s)
		return (NULL);
	dst = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*a = "Hello";
	char		*str;

	str = ft_strmapi(a, ft_toupperwrapper);
	printf("%s", str);
}
*/