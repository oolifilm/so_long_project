/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:17:23 by leaugust          #+#    #+#             */
/*   Updated: 2024/05/23 15:32:40 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = get_length(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	neg = 0;
	if (n < 0)
	{
		str[0] = '-';
		neg = 1;
		n = -n;
	}
	while (len-- > neg)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
