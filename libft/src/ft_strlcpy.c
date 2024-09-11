/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:16:35 by leaugust          #+#    #+#             */
/*   Updated: 2024/05/21 01:01:17 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	while (i + 1 < siz && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (siz > 0)
		dst[i] = '\0';
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	return (src_len);
}
