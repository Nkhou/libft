/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:20:56 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/20 15:34:40 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_lent(int n)
{
	int i;
	
	i = 0;
	if (n < 0)
		n *= (-1);
	
	while (n / 10 > 9)
	{
		n = n / 10;
		i++;
	}
	if (n == 0)
		i++;
	return (i);
	printf ("%d", i);
}
char *ft_number(int n)
{
	char *p;
    char *d;
	int a;
	int len;

	len = ft_lent(n) + 1;
	p = (char *) malloc (sizeof(char *) * len);
	d = p = (char *) malloc (sizeof(char *) * len);
	if(!p)
		return (NULL);
	a = n;
	while (n / 10 > 0)
	{
		a = n;
		n = n / 10;
		p[len] = (a % 10) + '0'; 
		len--;
	}
	p[len] = n + '0';
	return p;
}
char *ft_signe(int n)
{
	char *p;
	char *d;
	int i;
	int j;

	i = 0;
	j = 0;
	p = (char *) malloc (sizeof(char *) * ft_lent(n) + 1);
	d = (char *) malloc (sizeof(char *) * ft_lent(n) + 1);
	if ( !p || !d)
		return (NULL);
	p[i++]= '-';
	n *=(-1);
	d = ft_number(n);
	while (d[j])
		p[i++] = d[j++];
	return (p);
}

char *ft_itoa(int n)
{
	char *p;
	char *d;
	int i ;
	int j;

	i = 0;
	j = 0;
	p = (char *) malloc (sizeof(char *) * ft_lent(n) + 1);
	d = (char *) malloc (sizeof(char *) * ft_lent(n) + 1);
	if (!p)
		return (NULL);
	if (n == -2147483648)
	{
		p[i++]= '-';
		p[i++] = '2';
		d = ft_number(147483648);
		while (d[j])
			p[i++] = d[j++];
	}
	else if (n >= 0)
		p = ft_number(n);
	else
		p = ft_signe(n);
	p[ft_lent(n)] = '\0';
	return (p);
}
int main()
{
	
	char *str = ft_itoa(0);
	printf("%s", str);
}