#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int m , n , h=0;
	 cout<< "enter the num1 : ";
	 cin>>m;
	 cout<< "enter the num2 : ";
	 cin>>n;
	 while ( m>=n ){
	 	h+=1;
	 	m-=n;
	 }
		cout<< " maghsom :" << h;
		cout<<"\n baghimande :"<< m;
			 
	 
	 
	 
}