/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:35:52 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/25 15:21:07 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cmp;
	if (!lst || !del)
		return ;
	while (*lst)
	{
		cmp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(cmp, del);
	}
}

// int main()
// {
// 	t_list **lst = NULL;
// 	t_list *second = NULL;
// 	t_list *third = NULL;
// 	t_list *new = NULL;
// 	*lst = ft_lstnew("d");
// 	second = ft_lstnew("a");
// 	third = ft_lstnew("m");
// 	new = ft_lstnew("n");
// 	lst = &second;
// 	ft_lstadd_front(lst, new);
// 	ft_lstdelone(lst, third);
// 	while (lst)
// 	{
// 		printf("%d", lst->content);
// 		lst = lst->next;
// 	}
// }