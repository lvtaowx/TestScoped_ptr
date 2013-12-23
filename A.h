/*
 * A.h
 *
 *  Created on: Dec 20, 2013
 *      Author: lvanlv
 */

#ifndef A_H_
#define A_H_

#include <stdio.h>

namespace Test{

class A
{
public:
	A()
	{
		printf("this is A constructor!\n");
	}

	~A()
	{
		printf("this is A desconstructor!\n");
	}

	void printA();
};

}


#endif /* A_H_ */
