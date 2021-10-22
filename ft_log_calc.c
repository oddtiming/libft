/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_log_calc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyahoui- <iyahoui-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:56:13 by iyahoui-          #+#    #+#             */
/*   Updated: 2021/10/22 14:12:57 by iyahoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_log_calc(int value, int radix)
{
	int	counter;
	int	radix_pow;

	radix_pow = radix;
	counter = 1;
	while (radix_pow <= value)
	{
		radix_pow *= radix;
		counter++;
	}
	return (counter);
}
