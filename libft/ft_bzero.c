/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:07:01 by aoswald           #+#    #+#             */
/*   Updated: 2024/06/30 20:57:06 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** The bzero() function writes n zeroed bytes to the string s.  If n is zero,
** 	bzero()
**       does nothing.
*/

void	ft_bzero(void *s, size_t n)
{
	char	*s_iter;

	if (!n)
		return ;
	s_iter = (char *)s;
	while (n > 0)
	{
		*s_iter = 0;
		s_iter++;
		n--;
	}
}

/*
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};  
    size_t size = sizeof(arr);  
    ft_bzero(arr, size);

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/