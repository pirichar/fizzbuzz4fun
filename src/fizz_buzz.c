/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:30:06 by pirichar          #+#    #+#             */
/*   Updated: 2023/09/23 16:03:45 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fizz_buzz.h"



/*
		I  have to pass another variable tot his function
		because when I try returning the variable that I create
		within the scope of this function is does not work
*/
char* fizz_buzz(int i)
{
	char *rtn = calloc(10, sizeof(char));

	if (i % 5 == 0 && i % 3 == 0){
		strcpy(rtn ,"fizz buzz\0");
		return(rtn);
	}
	else if (i % 3 == 0){
		strcpy(rtn ,"fizz\0");
		return(rtn);
	}
	else if (i % 5 == 0){
		strcpy(rtn ,"buzz\0");
		return(rtn);
	}
	else
	{
		free(rtn);
		rtn = ft_itoa(i);
		return(rtn);
	}
}

