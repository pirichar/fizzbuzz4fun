/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:30:12 by pirichar          #+#    #+#             */
/*   Updated: 2023/09/23 11:41:08 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "colors.h"


/*
	Function that takes an int as an input
	It will iterate from 1 up to that number writing fizz or buzz when the multiple of 3 or 5 are met

*/

//utils.c
int ft_strlen(const char *str);
int	ft_char_count(int n);
char	*ft_swap_neg(char *str);
char	*ft_swap(char *str);
char	*ft_itoa(long long n);

//fizz_buzz.c
char* fizz_buzz(int i, char* str);


