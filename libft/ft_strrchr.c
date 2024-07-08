/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:56:20 by aoswald           #+#    #+#             */
/*   Updated: 2024/06/27 20:05:44 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cd;
	size_t	i;
	char	*last;

	cd = c;
	i = 0;
	last = NULL;
	while (s[i])
	{
		if (s[i] == cd)
			last = ((char *)&s[i]);
		i++;
	}
	if (cd == '\0')
		return ((char *) &s[i]);
	return (last);
}
