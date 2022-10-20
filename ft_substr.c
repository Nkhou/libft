/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:14:14 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/20 16:04:03 by nkhoudro         ###   ########.fr       */
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
	
	if (!s)
		return (NULL);
	str = malloc(len + 1);
	if (start >= ft_strlen(s))
		return (str);
	if (!str)
		return (NULL);
	while (cmp < len && s[i])
	{
		str[cmp] = (char )s[i];
		cmp++;
		i++;
	}
	str[cmp] = '\0';
	return (str);
}