/*
 * cancel.h
 *
 *  Created on: 2018. 11. 5.
 *      Author: daum
 */

#ifndef CANCEL_H_
#define CANCEL_H_

#include <iostream>
#include <string>
#include "example.h"
using namespace std;

class cancel : public example{
	string str;
public:
	cancel();
	virtual ~cancel();
};

#endif /* CANCEL_H_ */
