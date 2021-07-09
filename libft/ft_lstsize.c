/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:30:40 by aricholm          #+#    #+#             */
/*   Updated: 2021/05/19 21:40:49 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_lstsize(t_list *lst)
{
	size_t	len;
	t_list	*tmp;

	len = 0;
	tmp = lst;
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}
