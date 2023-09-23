/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:30:06 by pirichar          #+#    #+#             */
/*   Updated: 2023/09/23 13:47:43 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fizz_buzz.h"

/*
	So basically just takin the argument passed by the user
	Hardcoded the n == 0 cuz I was lazy and basically but its most likely BS
	Then I run a loop for everything to go untill 1 up to the provided number

*/

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int n = atoi(argv[1]);
		if (!n)
			printf(RED"Please provide an int\n");
		if (n < 0){
			printf(RED"must be over 0\n");
			return (1);
		}
		for ( int i = 1; i <= n ; i++ ){
			char* rtn = ft_itoa(i);;
			printf("%s\n",fizz_buzz(i, rtn));
			free(rtn);
		}
		return (0);
	}
	else 
		printf(RED"Please provide an argument to the program. Usage : fizz_buzz [int]\n");
}
