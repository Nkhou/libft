/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:50:09 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/19 20:59:03 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	unsigned int	i;
	char	*str;
	unsigned int	cmp;

	i = start;
	cmp = 0;
	
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
		str[cmp++] = (char)s[i++];
	str[cmp] = '\0';
	return (str);
}
//  int main()
//  {
//  	char *str = "jgfdjuduu";
//  	printf("%s \n", ft_substr(str,2,3));
//  	return (0);
//  }
	