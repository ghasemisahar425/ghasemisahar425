#include <iostream>

using namespace std;

int main(int argc, char** argv) {

int m,n,max,min,r=1;
cout<<"please enter two positive integer:";
cout<<"\n"<<"num1=";
cin>>m;
cout<<"num2=";
cin>>n;
max=m;
min=n;
while(r!=0)
{
r=(max%min);
max=min;
min=r;
}
cout<<"\n\n"<<"GCD for "<<m<<'&'<<n<<" is:"<<max;


}


