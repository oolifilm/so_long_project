/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:36:12 by leaugust          #+#    #+#             */
/*   Updated: 2024/05/23 15:32:22 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*mem;

	if (nmemb && size > 4294967295 / nmemb)
		return (NULL);
	total = nmemb * size;
	mem = malloc(total);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, 0, total);
	return (mem);
}
