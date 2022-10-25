/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:29:13 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/24 21:51:07 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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
// 	while (lst)
// 	{
// 		printf("%d\n",*((int *)lst->content));
// 		(lst) = (lst)->next;
// 	}
// }