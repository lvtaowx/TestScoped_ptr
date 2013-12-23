/*
 * B.h
 *
 *  Created on: Dec 20, 2013
 *      Author: lvanlv
 */

#ifndef B_H_
#define B_H_

#include <stdio.h>
#include <boost/scoped_ptr.hpp>

namespace Test
{

class A;

class B
{
public:
	B();
	~B();

	void printB();

private:
	boost::scoped_ptr<A> aPtr_;
};

}

#endif /* B_H_ */
