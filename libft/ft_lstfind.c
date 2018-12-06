/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femaury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 16:06:14 by femaury           #+#    #+#             */
/*   Updated: 2018/04/21 16:09:18 by femaury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfind(t_list *lst, void *ref)
{
	t_list	*curr;

	curr = lst;
	while (curr)
	{
		if (!ft_memcmp(curr->content, ref, curr->content_size))
			return (curr);
		curr = curr->next;
	}
	return (curr);
}
