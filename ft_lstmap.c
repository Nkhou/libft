/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:28:24 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/25 15:27:39 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void del(void *p)
{
	free(p);
}

void *plusone(void *s)
{
	int i = 0;
	char *p;

	p = (char *)s;
	while (p[i])
	{
		p[i] = '1';
		i++;
	}
	return (s);
}
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list	*head;
	if (!lst)
		return NULL;
	head = NULL;
	while (lst && f)
	{
		new = (t_list*) malloc(sizeof(t_list));
		if (!new)
		{
			ft_lstclear(&head, del);
			return NULL;
		}
		new ->content = f(lst->content);
		lst = lst->next;
		
		ft_lstadd_back(&head, new);
	}
	return (head);
	
}
int main()
{
	char s[] = "kjdki";
	char s2[] = "yyyyy";
	t_list *str , *p, *head;
	str = ft_lstnew(s);
	p = ft_lstnew(s2);
	str -> next = p;
	p -> next = NULL;
	head = str;
	head = ft_lstmap(head, plusone, del);
	
	return 0;
}