/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:30:06 by pirichar          #+#    #+#             */
/*   Updated: 2023/09/23 13:47:41 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fizz_buzz.h"



/*
		I  have to pass another variable tot his function
		because when I try returning the variable that I create
		within the scope of this function is does not work
*/
char* fizz_buzz(int i, char* str)
{
	if (i % 5 == 0 && i % 3 == 0){
		return("fizz buzz");
	}
	else if (i % 3 == 0){
		return("fizz");
	}
	else if (i % 5 == 0){
		return("buzz");
	}
	else
		return(str);
}

