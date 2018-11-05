/*
 * example.h
 *
 *  Created on: 2018. 11. 5.
 *      Author: daum
 */

#ifndef EXAMPLE_H_
#define EXAMPLE_H_
#include <iostream>
#include <string>

class example {
	string str[8]; //7시
	string str1[8]; //12시;
	string str2[8]; //17시;
public:
	example();
	virtual ~example();
};

#endif /* EXAMPLE_H_ */
