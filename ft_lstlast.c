/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:29:08 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/25 12:24:20 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
// int main()
// {
// 	t_list *lst = NULL;
// 	t_list *new = malloc(sizeof (t_list));

// 	int a = 444;
// 	new->content = &a;
// 	new->next = NULL;
// 	lst = new;

// t_list *front = malloc(sizeof (t_list));

// 	int b = 888;
// 	front->content =  &b;
// 	front->next = NULL;

// 	ft_lstadd_front(&lst, front);

// 	t_list *end =  ft_lstlast(lst);
// 	printf("%d\n",*((int *)end->content));
// 	// while (lst)
// 	// {
// 	// 	printf("%d\n",*((int *)lst->content));
// 	// 	(lst) = (lst)->next;
// 	// }

// 	return (0);
// }