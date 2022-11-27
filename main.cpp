#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int n , i , sum; 
    cout<<" enter number  :";
    cin >>n;
    sum = 0;
    for(int i = 1; i <= n ; i++){
        if( n % i == 0 ){
            sum+=i;
            cout <<i<<"\n";
        }
    }
    cout <<"majmou :"<<sum;
}