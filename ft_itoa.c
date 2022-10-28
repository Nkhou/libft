/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:20:56 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/27 21:05:29 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lent(long n)
{
	long	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= (-1);
	}
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_change(char *p, long n, int len)
{	
	long	a;
	int		i;

	i = 0;
	if (!p)
		return (NULL);
	if (n < 0)
	{
		p[i++] = '-';
		n *= (-1);
	}
	if (n >= 0 && n <= 9)
	{
		p[i] = n + '0';
		return (p);
	}
	while (len-- > i)
	{
		a = n;
		n = n / 10;
		p[len] = a % 10 + 48;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	char	*p;
	long	nb;
	int		i;
	int		len;

	nb = (long)n;
	len = ft_lent(n);
	p = (char *) malloc(sizeof(char) * (len + 1));
	i = ft_lent(nb);
	p = ft_change(p, nb, len);
	if (!p)
		return (NULL);
	p[i] = '\0';
	return (p);
}

// char *ft_itoa(int nb)
// {
// 	/*
// 		- Get number length (take into consideration - sign)
// 			*
// 			*
// 		Allocate enough memory to hold the string representation of the number
// 		Turn the number into its positive version (NB: 
// pay attention to INT_MIN (OVERFLOW !!))
// 		Convert the number digits into characters
//  and store them into the string array
// 	*/	
// 	int len;

// 	len = ft_get_number_length(n);
// }

// int	ft_get_number_length(int nb)
// {
// }

// int main()
// {
// 	char *str = ft_itoa(-623);
// 	// printf("%d\n", INT_MIN);
// 	printf("%s", str);
// }