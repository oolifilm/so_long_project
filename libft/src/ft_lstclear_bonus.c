/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:41:04 by leaugust          #+#    #+#             */
/*   Updated: 2024/05/28 20:04:18 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (*lst == 0)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		if (del)
			del((*lst)->content);
		free(*lst);
		*lst = next;
	}
	*lst = 0;
}
