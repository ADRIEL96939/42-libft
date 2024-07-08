/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:52:17 by aoswald           #+#    #+#             */
/*   Updated: 2024/06/22 19:55:40 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (*(s1 + i) || *(s2 + i)))
	{
		if (*(s1 + i) != *(s2 + i))
			return ((unsigned char)(*(s1 + i)) - (unsigned char)(*(s2 + i)));
		i++;
	}
	return (0);
}

/*
int main()
{
	char	*a = "habis";
	char	*b = "hbbi";
	int		c;
	c = ft_strncmp(a,b,5);
	printf("%i\n",c);
}
*/