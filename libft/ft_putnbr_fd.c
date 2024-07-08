/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:45:55 by aoswald           #+#    #+#             */
/*   Updated: 2024/06/19 20:41:58 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	nb;
	int			i;
	char		c[20];

	i = 0;
	nb = n;
	if (nb == 0)
	{
		write(fd, "0", 1);
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	while (nb > 0)
	{
		c[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	while (i > 0)
	{
		i--;
		write(fd, &c[i], 1);
	}
}
/*
int	main(void)
{
	int	n;
	int	fd;

	n = 0;
	fd = 1;
	ft_putnbr_fd(n,fd);
}
*/