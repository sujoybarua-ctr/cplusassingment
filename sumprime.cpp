//summation of all the prime numbers till n
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the input=";
cin>>n;
int sum=0;
bool prime;
if (n<2)
{
cout<<"sum is 0";
}else 
{
    for (int i = 0; i*i <=n; i++)
    {
    if (n%i!=0)
    {
    prime=true;
    }
    
    }
    
}






    return 0;
}