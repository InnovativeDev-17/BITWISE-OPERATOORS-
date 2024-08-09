// ARYAN THORAT 23070123032
#include <iostream>

using namespace std;

int main() {
 int a , b, bit_and,bit_or,bit_xor,bit_not_b,bit_not_a;
 cout<<"Enter the first number: "<<endl;
 cin>>a;
 cout<<"Enter the second number: "<<endl;
 cin>>b;
 
 bit_and = a&b;
 cout<<bit_and<<endl;
 bit_or = a|b;
 cout<<bit_or<<endl;
 bit_xor = a^b;
 cout<<bit_xor<<endl;
 bit_not_a = ~a;
 cout<<bit_not_a<<endl;
 bit_not_b = ~b;
 cout<<bit_not_b<<endl;
 a = a<<2;
 cout<<a<<endl;
 b = b<<2;
 cout<<b<<endl;
 a = a>>2;
 cout<<a<<endl;
 b = b>>2;
 cout<<b<<endl;
 }

*/ 
Enter the first number: 
1
Enter the second number: 
44
0
45
45
-2
-45
4
176
1
44*/
