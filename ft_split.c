/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:31:09 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/14 02:39:12 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char **p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		free(p[i]);
		i++;
	}
	free(*p);
}

char	**ft_malloc(char const *s, char **p, char c, int d)
{
	int	i;
	int	j;
	int	r;

	j = 0;
	r = 0;
	i = 0;
	while (s[j] == c)
		j++;
	while (r < d)
	{
		i = 0;
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j++] != c)
			i++;
		p[r] = (char *)malloc(sizeof(char *) * i + 1);
		if (!p[r])
		{
			ft_free(&p[r]);
			break ;
		}
		r++;
	}
	return (p);
}

int	ft_word(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c && s[i + 1] != '\0')
			j++;
		i++;
	}
	if (s[i] == '\0' && s[i - 1] == c)
		return (j);
	return (j + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		r;
	int		k;

	i = 0;
	k = 0;
	r = 0;
	p = malloc((ft_word(s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	p = ft_malloc(s, p, c, ft_word(s, c));
	while (s[i])
	{
		r = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			p[k][r++] = s[i++];
		p[k][r] = '\0';
		k++;
	}
	p[k] = NULL;
	return (p);
}

int	main(void)
{
	int i = 0;
	char **d = ft_split("A b  Chhh                    Dv     ll",' ');
	while (i < 5)
	{
		printf("%s\n", d[i]);
		i++;
	}
	return (0);
}