/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:08:30 by aoswald           #+#    #+#             */
/*   Updated: 2024/06/30 22:18:14 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		*(str + i) = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
int main() {
    char str[10] = "before";
    size_t len = sizeof(str) - 1; 
    int fill_char = 'X';

    printf("Original string: %s\n", str);

    ft_memset(str, fill_char, len);
    printf("String after ft_memset: %s\n", str);
    return 0;
}
*/