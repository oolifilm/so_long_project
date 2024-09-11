/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:18:49 by leaugust          #+#    #+#             */
/*   Updated: 2024/05/21 01:07:46 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	int		srclen;
	size_t	dstlen;

	srclen = 0;
	dstlen = 0;
	while (dst[dstlen] && dstlen < siz)
		dstlen++;
	while (src[srclen])
		srclen++;
	if (siz == 0)
		return (srclen);
	i = dstlen;
	while (src[i - dstlen] && i < siz - 1)
	{
		dst[i] = src[i - dstlen];
		i++;
	}
	if (dstlen < siz)
		dst[i] = '\0';
	return (dstlen + srclen);
}
