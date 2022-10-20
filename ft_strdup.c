/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:59:45 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/19 20:12:32 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int	i;
	char	*c;

	i = 0;
	c = malloc(sizeof(char ) * (ft_strlen((char *)s1) + 1));
	if (c == NULL)
		return (NULL);
	while (s1[i])
	{
		c[i] = (char )s1[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
// int main() {
//   char src[] = "helloiisiuai";
//   printf("%s", ft_strdup(src));
//   return 0;
//   free(src);
// }