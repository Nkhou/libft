/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:26:28 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/23 19:38:12 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst-> content);
	free(lst);
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