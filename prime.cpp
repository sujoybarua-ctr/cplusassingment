//find prime
#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter an interger input=";
cin>>a;
bool prime;
if (a<2)
{cout<<"Not prime & not composite";
return 0;
}else{
    for (int i = 1; i*i <=a; i++)
    {
        if (a%i!=0)
        {
prime=true;
        }else prime=false;
        
    }
}if (prime==true)
{cout<<"the input is prime";
}else cout<<"not prime";
    return 0;
}