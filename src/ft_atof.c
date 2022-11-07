/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismaelyahyaouiracine <ismaelyahyaouirac    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:11:37 by ismaelyahya       #+#    #+#             */
/*   Updated: 2022/11/04 15:11:38 by ismaelyahya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

double	ft_atof(const char *str)
{
	int		i;
	double	integer;
	double	decimal;
	int		sign;

	i = 0;
	integer = 0;
	decimal = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (ft_isdigit(str[i]))
		integer = 10 * integer + (str[i++] - '0');
    if (!str[i] || str[i++] != '.')
        return (integer);
	while (ft_isdigit(str[i]))
		decimal = 10 * decimal + (str[i++] - '0');
	return ((sign * integer) + (decimal / (get_magnitude(decimal) * 10)));
}