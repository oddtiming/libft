/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_magnitude.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyahoui- <iyahoui-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:35:14 by iyahoui-          #+#    #+#             */
/*   Updated: 2021/11/11 13:37:40 by iyahoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns (magnitude+1), b/c 0<=numbers<=9 still need one char
int	get_magnitude(int n)
{
	int	magnitude;

	magnitude = 0;
	while (n)
	{
		magnitude *= 10;
		n /= 10;
	}
	return (magnitude + 1);
}

int	get_magnitude_unsigned(unsigned int n)
{
	int	magnitude;

	magnitude = 0;
	while (n)
	{
		magnitude *= 10;
		n /= 10;
	}
	return (magnitude + 1);
}
