/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:47:19 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/25 13:49:56 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst-> content);
		lst = lst->next;
	}
}

int main()
{
	t_list **lst = NULL;
	t_list *second = NULL;
	t_list *third = NULL;
	t_list *new = NULL;
	*lst = ft_lstnew("d");
	second = ft_lstnew("a");
	third = ft_lstnew("m");
	new = ft_lstnew("n");
	lst = &second;
	ft_lstadd_front(lst, new);
	ft_lstdelone(lst, third);
	while (lst)
	{
		printf("%d", lst->content);
		lst = lst->next;
	}
}