/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/31 12:59:00 by rbenjami          #+#    #+#             */
/*   Updated: 2013/08/31 12:59:01 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
}

void		ft_putnbr(int nbr)
{
	int		tmp;
	int		chiffre;
	int		size;
	
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	tmp = nbr;
	size = 1;
	while (tmp / 10 > 0)
	{
		size = size * 10;
		tmp = tmp / 10;
	}
	while (size > 0)
	{
		chiffre = 0;
		chiffre = nbr / size;
		ft_putchar('0' + chiffre);
		nbr = nbr % size;
		size = size / 10;
	}
}