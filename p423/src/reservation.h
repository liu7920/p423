/*
 * reservation.h
 *
 *  Created on: 2018. 11. 5.
 *      Author: daum
 */

#ifndef RESERVATION_H_
#define RESERVATION_H_

#include <iostream>
#include <string>
using namespace std;

#include "example.h"

class reservation : public example{
public:
	reservation();
	void input(int i, int o, string name){
		re2(i,o-1,name);
	}
	virtual ~reservation();
};

#endif /* RESERVATION_H_ */
