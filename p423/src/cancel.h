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
	void de(int i, int o, string name){
		if(name==re1(i,o-1)){
			re(i,o-1);
		}
		else{
			cout << "입력 실패" << endl;
		}
	}
	virtual ~cancel();
};

#endif /* CANCEL_H_ */
