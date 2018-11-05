#include <iostream>
#include <string>
using namespace std;

#include "reservation.h"
#include "cancel.h"
#include "example.h"

int main() {

	int i;
	reservation r; //예약
	cancel c; //취소
	example e; //보기

	cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl;

	while(1){

		cout << "예약:1, 취소:2, 보기:3, 끝내기:4 >>";
		cin >> i;

		if(i==1){

		}
		else if(i==2){

		}
		else if(i==3){

		}
		else if(i==4){
			cout << "예약 시스템을 종료합니다." << endl;
			break;
		}

	}

	return 0;
}
