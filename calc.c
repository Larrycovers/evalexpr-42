/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/31 12:34:56 by rbenjami          #+#    #+#             */
/*   Updated: 2013/08/31 12:34:57 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_add(int a, int b)
{
	return (a + b);
}

int		ft_sub(int a, int b)
{
	return (a - b);
}

int		ft_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	return (0);
}

int		ft_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	return (0);
}

int		ft_mul(int a, int b)
{
	return (a * b);
}
