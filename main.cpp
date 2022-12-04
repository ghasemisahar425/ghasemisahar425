#include<iostream>

using namespace std;
int main()
{
 int x=10 , i;
float a[x] , sum ;
    cout<<"number :";
    
    cin>>a[0];
        int max=a[0];
	cout<<"number : ";
	cin>>a[1];
		int min=a[1];
			for(int i=2 ; i<x ; i++)
			{	
	cout<<"number : ";
	cin>>a[i];
			}
			for(int i=0 ; i<x ; i++)
			{				
		if(a[i]>max)
		max=a[i];
		else if(a[i]<min)
		min=a[i];	
			}
			sum=(min+max)/2;
cout<<"max is :" <<max<<endl;
cout<<"min is :" <<min<<endl;
cout<<"myangin is :"<<sum;
}
