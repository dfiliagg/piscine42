/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiliagg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:18:21 by dfiliagg          #+#    #+#             */
/*   Updated: 2022/09/08 11:22:35 by dfiliagg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_reverse_alphabet()
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}
