/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:46:57 by aoswald           #+#    #+#             */
/*   Updated: 2024/07/01 19:50:14 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters s: The string on which to iterate.
f: The function to apply to each character.
Return value None
External functs. None
Description Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.
*/
#include "libft.h"

/*
** int	ft_toupper(int c)
** {
** 	if (c >= 'a' && c <= 'z')
** 		c = c - 32;
** 	return (c);
** }
**
** void	ft_toupperwrapper(unsigned int i, char	*c)
** {
** 	(void)i;
** 	*c = ft_toupper(*c);
** }
**
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s || !(*s) || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
** #include <stdio.h>
** int main()
** {
** 	char	a[] = "hello";
** 	ft_striteri(a, ft_toupperwrapper);
** 	printf("%s",a);
** }
*/