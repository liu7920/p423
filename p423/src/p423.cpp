#include <iostream>
#include <string>
using namespace std;

#include "reservation.h"
#include "cancel.h"
#include "example.h"

int main() {

	int i,o;
	string name;
	reservation r; //예약
	cancel c; //취소
	example e; //보기

	cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl;

	while(1){

		cout << "\n예약:1, 취소:2, 보기:3, 끝내기:4 >>";
		cin >> i;

		if(i==1){
			cout << "07시:1, 12시:2, 17시:3>>";
			cin >> i;
			r.print1(i);
			cout << "좌석 번호>>";
			cin >> o;
			cout << "이름 입력>>";
			cin >> name;
			r.input(i,o,name);
		}
		else if(i==2){
			cout << "07시:1, 12시:2, 17시:3>>";
			cin >> i;
			r.print1(i);
			cout << "좌석 번호>>";
			cin >> o;
			cout << "이름 입력>>";
			cin >> name;
			c.de(i,o,name);
			//삭제 안되는거 해결
		}
		else if(i==3){
			r.print();
		}
		else if(i==4){
			cout << "예약 시스템을 종료합니다." << endl;
			break;
		}

	}

	return 0;
}
