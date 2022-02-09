/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_token.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyahoui- <iyahoui-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:48:46 by iyahoui-          #+#    #+#             */
/*   Updated: 2022/02/08 19:49:39 by iyahoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function returns a malloced substring of the last token as
 * delimited by param delimiter from param string.
 * 
 * @param string	The original string.
 * @param delimiter	What separates each token in the string.
 * @return char*	Malloced string of the last token. 
 * 					- If no delimiter, a copy of the string will be returned.
 * 					- In case of error, NULL is returned.
 */
char	*ft_get_last_token(char *string, char delimiter)
{
	size_t	str_len;
	char	*last_token;
	size_t	i;
	size_t	j;

	str_len = ft_strlen(string);
	i = str_len;
	if (!string)
		return (NULL);
	while (string[i] != delimiter && i >= 0)
		i--;
	last_token = malloc(str_len - i + 1);
	j = 0;
	while (i++ < str_len)
	{
		last_token[j] = string[i];
		j++;
	}
	last_token[j] = 0;
	return (last_token);
}
