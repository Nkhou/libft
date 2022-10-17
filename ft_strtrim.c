/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:01:09 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/12 22:30:36 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_set(char s1, char const  *set)
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

	i = 0;
	d = 0;
	j = ft_strlen(s1) ;
	if (!s1 || !set)
		return NULL;
	p = (char *) malloc(ft_strlen(s1) + 1);
	if (p == NULL)
		return (NULL);
	while (ft_set(s1[i], set) == 1)
			i++;
	while (ft_set(s1[j - 1], set) == 1)
		j--;
	while (i < j)
	{
		p[d] = s1[i];
		i++;
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
// 	char *d = ft_strtrim(s1,s2);
// 	while(d[i])
// 	{
// 	printf("%c", d[i++]);
// 	}
// 	return (0);
// }