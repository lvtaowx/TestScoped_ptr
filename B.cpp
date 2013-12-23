/*
 * B.cpp
 *
 *  Created on: Dec 20, 2013
 *      Author: lvanlv
 */

#include<A.h>
#include<B.h>

namespace Test
{

B::B()
	: aPtr_(new A)
{
	printf("this is B construction\n");
}

B::~B()
{
	printf("this is B desconstruction\n");
}

void B::printB()
{
	aPtr_->printA();
}

}

