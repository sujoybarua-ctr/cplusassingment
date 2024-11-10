#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float bal=100000;
float intr=(6.5/100);
int year =6;
for (int i = 1; i <=year; i++)
{
bal=(bal*intr)+bal;
}
cout<< fixed<< setprecision(2);
 cout<< bal<<endl;
    return 0;
}