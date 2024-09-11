/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:42:16 by leaugust          #+#    #+#             */
/*   Updated: 2024/05/28 18:17:49 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (0);
	while (n--)
		*((unsigned char *)(dest + n)) = *((unsigned char *)(src + n));
	return (dest);
}
