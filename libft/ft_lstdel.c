/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 16:35:20 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/03 16:54:07 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*save;
	t_list		*list;

	list = *alst;
	while (list)
	{
		save = list;
		del((save->content), save->content_size);
		free(save);
		list = list->next;
	}
	*alst = NULL;
}
