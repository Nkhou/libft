/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:31:09 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/21 22:07:55 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char **p, int last)
{
	int	i;

	i = 0;
	while (i < last)
	{
		free(p[i]);
		i++;
	}
	free(*p);
}
static int	ft_skip(char const *s, int i, char c);
int	ft_malloc(char const *s, char **p, char c, int nwords)
{
	int	i;
	int	j;
	int	r;

	j = 0;
	r = 0;
	j = ft_skip(s, j, c);
	while (r < nwords)
	{
		j = ft_skip(s, j, c);
		i = 0;
		while (s[j] && s[j] != c)
		{
			i++;
			j++;
		}
		p[r] = (char *)malloc(sizeof(char) * (i + 1));
		if (!p[r])
		{
			ft_free(&p[r], r);
			return (0); // Failure
		}
		r++;
	}
	return (1);// Success
}

static int ft_skip(char const *s, int i, char c)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}
int	ft_word(char const *s, char c)
{
	
	int i;
	int words;

	i = 0;
	words = 0;
	while (s[i])
	{
		i = ft_skip(s, i, c);
		if (s[i] && s[i] != c)
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		count;
	int	i;
	int	j;
	int	r;

	if (!s)
		return NULL;
	count = ft_word(s, c);
	p = (char **) malloc(sizeof(char *) * (count + 1)); // Array of strings (length = count + 1 (NULL))
	if (!p || ft_malloc(s, p, c, count) == 0) // Protection
		return (NULL);
	j = 0;
	i = 0;
	while (j < count)
	{
		r = 0;
		i = ft_skip(s, i, c);
		while (s[i] && s[i] !=c)
		{
			p[j][r++] = s[i++];
		}
		p[j][r] = '\0';
		j++;
	}
	p[j] = NULL;
	return (p);
}

// void display_array(char **arr)
// {
// 	int i = 0;

// 	if (!arr)
// 		return ;
// 	while (arr[i])
// 	{
// 		printf("[%s]", arr[i]);
// 		i++;
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	display_array(ft_split("  dev,,cdjdvj   vvxxcz", ','));
// 	display_array(ft_split("  dev,,cdjdvj   vvxxcz", ' '));
// 	display_array(ft_split("  dev,,cdjdvj   vvxxcz", ' '));
// 	display_array(ft_split("  dev,,cdjdvj   vvxxcz", 'v'));
// 	display_array(ft_split("  dev,,cdjdvj   vvxxcz", 'd'));
// 	display_array(ft_split("n  dev,,cdjdvj   vvxxcz", '\0'));
// 	display_array(ft_split("  dev,,cdjdvj   vvxxcz", 'z'));
// 	display_array(ft_split("", ' '));
// 	display_array(ft_split("", '\0'));
// 	display_array(ft_split(" ", '\0'));
// 	display_array(ft_split("hello", 'l'));
// 	return (0);
// }