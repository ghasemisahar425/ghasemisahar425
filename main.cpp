#include <iostream>

using namespace std;

int main(int argc, char** argv) {

	int n,x=2,i,k,sum=0;
	cout<<"enter a num:";
	cin>>n;
		do{for (i=2,k=0;i<=x/2&&k==0;i++)
			if(x%i==0)
			k++;
		if(k==0)
		  cout << x << "  ";
		 x++;
		 }
		while (x<=n);{
			
		}
    	}
