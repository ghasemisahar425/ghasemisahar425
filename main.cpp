#include <iostream>

using namespace std;

int main(){
	
	int s ;
	float t;
	cout << "please enter your salary:";
	cin >> s;
    if (s < 6000000 ){
    	t= s* 0.0;
    	cout <<t;
	}
	else if(s>=6000000&&s<8000000){
        t=s*0.05;
	    cout <<"your taxes:"<<t;
	}
	else if (s>=8000000&&s<10000000){
     	t=s*0.10;
    	cout<<"your taxes:"<<t;
}
	else if (s>=10000000&&s<14000000){
		t=s*0.15;
		cout<<"your taxes:"<<t;
	}
	else if (s>=14000000&&s<18000000){
		t=s*0.20;
		cout<<"your taxes:"<<t;
	}
	else if (s>=18000000&&s<25000000){
		t=s*0.25;
		cout<<"your taxes"<<t;
	}
    else {
    	t=s*0.35;
    	cout<<"your taxes"<<t;
	}

}