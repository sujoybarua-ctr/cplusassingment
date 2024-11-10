#include<iostream>
using namespace std;
int main()
{
int b=100000*100;// to represent cents
double intr=(6.5/100);
int year =6;
for (int i = 1; i <=year; i++)
{
b=(b*intr)+b;
cout<<"annual balance after year "<<i<<" is "<<b/100
<<"."<<b%100<<endl;
} cout<<"final balance after 6 years="<< b/100<<"."<<b %100<< endl;
    return 0;
}