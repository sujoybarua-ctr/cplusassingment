//code for each grade of 5 courses, total marks of 5 courses,gpa & grade
#include <iostream>
using namespace std;
int main ()
{
int a,b,c,d,e;
cout<<"enter your marks in course 1=";
cin>>a;
cout<<"enter your marks in course 2=";
cin>>b;
cout<<"enter your marks in course 3=";
cin>>c;
cout<<"enter your marks in course 4=";
cin>>d;
cout<<"enter your marks in course 5=";
cin>>e;
if (a<0)
{
    cout<<"Invalid mark";
}else {
    if (a>=0&&a<50)
    {
        cout<<"Grade in course 1=F";
    }else if (a>=50&&a<60)
    {
        cout<<"Grade in course 1=D";
    }else if (a>=60&&a<65)
    {
        cout<<"Grade in course 1=D+";
    }else if (a>=65&&a<70)
    {
        cout<<"Grade in course 1=C";
    }else if (a>=70&&a<75)
    {
        cout<<"Grade in course 1=C+";
    }else if (a>=75&&a<80)
    {
        cout<<"Grade in course 1=B";
    }else if (a>=80&&a<85)
    {
        cout<<"Grade in course 1=B+";
    }else if (a>=85&&a<90)
    {
        cout<<"Grade in course 1=A";
    }else if (a>=90&&a<=100)
    {
        cout<<"Grade in course 1=A+";
    }    
}
if (b<0)
{
    cout<<"Invalid mark";
}else {
    if (b>=0&&b<50)
    {
        cout<<"Grade in course 2=F";
    }else if (b>=50&&b<60)
    {
        cout<<"Grade in course 2=D";
    }else if (b>=60&&b<65)
    {
        cout<<"Grade in course 2=D+";
    }else if (b>=65&&b<70)
    {
        cout<<"Grade in course 2=C";
    }else if (b>=70&&b<75)
    {
        cout<<"Grade in course 2=C+";
    }else if (b>=75&&b<80)
    {
        cout<<"Grade in course 2=B";
    }else if (b>=80&&b<85)
    {
        cout<<"Grade in course 2=B+";
    }else if (b>=85&&b<90)
    {
        cout<<"Grade in course 2=A";
    }else if (b>=90&&b<=100)
    {
        cout<<"Grade in course 2=A+";
    }    
}




   return 0;
}