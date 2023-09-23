/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_test.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:42:31 by pirichar          #+#    #+#             */
/*   Updated: 2023/09/23 14:38:22 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gtest/gtest.h"

// this is required to import the C code into the CPP 
extern "C"{
#include "../include/fizz_buzz.h"
}

TEST(FizzBuzzTest, FizzBuzzTest1)
{
	printf("WITHIN THE TEST\n");
	char *str = fizz_buzz(1, (char*)"1");
	EXPECT_STREQ(str, "1");
	free(str);
}









