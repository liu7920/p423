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
using namespace std;

class example {
	string str1[8];
	string str2[8];
	string str3[8];
public:
	example(){
		for(int i=0; i<8; i++){
			this->str1[i]="---";
			this->str2[i]="---";
			this->str3[i]="---";
		}
	}

	void print(){
		cout << "07시:	";
		for(int i=0; i<8; i++){
			cout << this->str1[i] << "	" ;
		}
		cout << "\n12시:	";
		for(int i=0; i<8; i++){
			cout << this->str2[i] << "	" ;
		}
		cout << "\n17시:	";
		for(int i=0; i<8; i++){
			cout << this->str3[i] << "	" ;
		}
		cout << endl;
	}

	void print1(int i){
		if(i==1){
			cout << "07시:	";
			for(int i=0; i<8; i++){
				cout << this->str1[i] << "	" ;
			}
			cout << endl;
		}
		else if(i==2){
			cout << "12시:	";
			for(int i=0; i<8; i++){
				cout << this->str2[i] << "	" ;
			}
			cout << endl;
		}
		else if(i==3){
			cout << "17시:	";
			for(int i=0; i<8; i++){
				cout << this->str3[i] << "	" ;
			}
			cout << endl;
		}
	}

	void re(int i, int o){
		if(i==1){
			this->str1[o]="---";
		}
		else if(i==2){
			this->str2[o]="---";
		}
		else if(i==3){
			this->str3[o]="---";
		}
	}

	string re1(int i,int o){
		if(i==1){
			return this->str1[o];
		}
		else if(i==2){
			return this->str2[o];
		}
		else if(i==3){
			return this->str3[o];
		}
	}

	void re2(int i, int o, string name){
		if(i==1){
			this->str1[o]=name;
		}
		else if(i==2){
			this->str2[o]=name;
		}
		else if(i==3){
			this->str3[o]=name;
		}
	}
	virtual ~example();
};

#endif /* EXAMPLE_H_ */
