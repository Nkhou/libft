/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:01:09 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/20 16:53:23 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_is_in_set(char s1, char const  *set)
{
	int i;

	i = 0;
	while ((char)set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	char *p;
	int j;
	int d;
	int cmp;

	if (!s1 || !set)
		return NULL;
	i = 0;
	while (s1[i] && ft_is_in_set(s1[i], set) == 1)
			i++;
	j = ft_strlen(s1) ;
	cmp = i;
	while (j >= 0 && ft_is_in_set(s1[j - 1], set) == 1)
		j--;
	d = 0;
	while (i < j) 
	{
		d++;
		i++;
	}
	p = malloc(d + 1);
	d = 0;
	if (p == NULL)
		return (NULL);
	while (cmp < j )
	{
		p[d] = s1[cmp];
		cmp++;
		d++;
	}
	p[d] = '\0';
	return (p);
}

// int main()
// {
// 	int i;

// 	i = 0;
// 	char *s1 = "\t   \n\n\n  \n\n\t    Hello \t  Please\n Trim me !\t\t\t\n  \t\t\t\t  ";
//     char *s2 = "Hello \t  Please\n Trim me !";
// 	char *d = ft_strtrim(s1, " \n\t");
	
// 	printf("%d\n%s", ft_strlen(d), d);
// 	return (0);
// }