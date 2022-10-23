/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:54:30 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/23 19:35:50 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstnew(void *content)
{
	t_list *head;
	head = NULL;
	head = ( t_list *)malloc(sizeof( t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

// int	main(void)
// {
// 	t_list *head ;
// 	head = ft_lstnew("arr");

// 	while (head != NULL)
// 	{
// 		printf("%s", head->content);
// 		head = head -> next;
// 	}
// 	return (0);
// }