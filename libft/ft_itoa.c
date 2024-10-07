/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:16:45 by aoswald           #+#    #+#             */
/*   Updated: 2024/07/03 17:34:56 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digitlen(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*nb;
	long int	nc;
	int		i;
	int		j;

	nc = n;
	j = 0;
	if (n < 0)
	{
		nc *= -1;
		j++;
	}
	i = ft_digitlen(nc) + j;
	nb = malloc((i + 1) * sizeof(char));
	if (!nb)
		return (NULL);
	if (n < 0)
		nb[0] = '-';
	nb[i] = '\0';
	while (i-- > j)
	{
		nb[i] = nc % 10 + '0';
		nc /= 10;
	}
	return (nb);
}

/*
char	*ft_itoa(int n)
{
	char	*nc;
	char	temp;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	nc = malloc((ft_digitindex[1](n) * sizeof(char)) + 1);
	if (!nc)
		return (NULL);
	if (n < 0)
	{
		*(nc + 0) = '-';
		n *= -1;
		i++;
		j = 1;
	}
	while (n > 0)
	{
		*(nc + i) = n % 10 + '0';
		n /= 10;
		i++;
	}
	while (j < i)
	{
		i--;
		temp = *(nc + i);
		*(nc + i) = *(nc + j);
		*(nc + j) = temp;
		j++;
	}
	return (nc);
}
*/
/*
#include <stdio.h>
int	main(void)
{
	int		number;
	char	*str;
	int		test_numbers[] = {0, 2147483647, -2147483648, 7890};
	int		num_tests;

	// Test with various numbers (including negative)
	num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);
	for (int i = 0; i < num_tests; i++)
	{
		number = test_numbers[i];
		// Call ft_itoa to convert the number to a string
		str = ft_itoa(number);
		// Check if memory allocation failed
		if (str == NULL)
		{
			printf("Memory allocation failed for number %d.\n", number);
			return (1);
		}
		// Print the converted string
		printf("Integer %d converted to string: %s\n", number, str);
		// Free the allocated memory (important to prevent leaks)
		free(str);
	}
	return (0);
}
*/
