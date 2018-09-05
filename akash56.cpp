#include <iostream>
using namespace std;
int main()
{
int yyyy, remainder;
cout << "whether the year is leap or not"<<endl;
cout << "enter the year in yyyy format"<<endl;
cin >> yyyy;
remainder = yyyy/4;
if(yyyy%4
 == 0)
{
cout << "the year is" <<yyyy<< "leap";}
else
{ 
cout << "the year is" <<yyyy<< "not leap";}
return 0;
} 

