#include <iostream>

using namespace std;

 main() {

float x , y , z , s , m, t;
cin >> x >> z >> y ;
s = (x - y) * ( x + z);
cout << "sorat: "<< s << " ";
m = ((x + y + z) * (x + y + z)) + 1;
cout << "makhraj: " << m<< " "; 
t = s / m;
cout << "total: " << t << " ";

	
}