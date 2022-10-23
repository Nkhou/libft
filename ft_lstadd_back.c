/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:04:00 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/23 22:22:35 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while ((*lst)->next != NULL)
	{
		(*lst)= (*lst) -> next;
	}
	(*lst) -> next = new;
	new->next = NULL;
}
int main()
{
	t_list *lst = NULL;
	t_list *new = malloc(sizeof (t_list));

	int a = 444;
	new->content = &a;
	new->next = NULL;
	lst = new;

t_list *back = malloc(sizeof (t_list));

	int b = 9999999;
	back->content =  &b;
	back->next = NULL;

	ft_lstadd_back(&lst, back);
	
	while (lst)
	{
		printf("%d\n",*((int *)lst->content));
		(lst) = (lst)->next;
	}
}