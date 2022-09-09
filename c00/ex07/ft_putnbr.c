/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiliagg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 08:22:50 by dfiliagg          #+#    #+#             */
/*   Updated: 2022/09/09 12:24:44 by dfiliagg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	reversed(int nb, int indice);
int		indic(int n);
int		indmax(int n, int i);

void	ft_putnbr(int nb)
{
	int	indice;

	if (nb != -2147483648)
	{
		indice = indic(nb);
		indice = indmax(nb, indice);
		reversed(nb, indice);
	}
	else
	{
		write(1, "-2147483648", 11);
	}
}

int	indic(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		write(1, "-", 1);
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	indmax(int n, int i)
{
	int	indice;

	indice = 1;
	while (i != 0)
	{
		indice = indice * 10;
		i--;
	}
	return (indice);
}

void	reversed(int nb, int indice)
{
	int	num;
	int	temp;

	num = nb;
	while (indice > 0)
	{
		temp = num / indice;
		num = num - indice * temp;
		temp = temp + 48;
		write(1, &temp, 1);
		indice = indice / 10;
	}
}
