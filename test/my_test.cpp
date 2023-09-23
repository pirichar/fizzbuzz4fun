/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_test.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:42:31 by pirichar          #+#    #+#             */
/*   Updated: 2023/09/23 16:03:25 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gtest/gtest.h"

/* this is required to import the C code into the CPP 
we need to make a distinction an tell the framework 
we will pull the file we test the functionnality from
*/

extern "C"{
	#include "../include/fizz_buzz.h"
}

//google test has some macros define
TEST(FizzBuzzTest, FizzBuzzTest1)
{
	char *str = fizz_buzz(15);
	ASSERT_STREQ(str, "fizz buzz");
	free(str);
}










