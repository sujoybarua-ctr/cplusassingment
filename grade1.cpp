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
        cout<<"\nGrade in course 2=F";
    }else if (b>=50&&b<60)
    {
        cout<<"\nGrade in course 2=D";
    }else if (b>=60&&b<65)
    {
        cout<<"\nGrade in course 2=D+";
    }else if (b>=65&&b<70)
    {
        cout<<"\nGrade in course 2=C";
    }else if (b>=70&&b<75)
    {
        cout<<"\nGrade in course 2=C+";
    }else if (b>=75&&b<80)
    {
        cout<<"\nGrade in course 2=B";
    }else if (b>=80&&b<85)
    {
        cout<<"\nGrade in course 2=B+";
    }else if (b>=85&&b<90)
    {
        cout<<"\nGrade in course 2=A";
    }else if (b>=90&&b<=100)
    {
        cout<<"\nGrade in course 2=A+";
    }    
}
if (c<0)
{
    cout<<"Invalid mark";
}else {
    if (c>=0&&c<50)
    {
        cout<<"\nGrade in course 3=F";
    }else if (c>=50&&c<60)
    {
        cout<<"\nGrade in course 3=D";
    }else if (c>=60&&c<65)
    {
        cout<<"\nGrade in course 3=D+";
    }else if (c>=65&&c<70)
    {
        cout<<"\nGrade in course 3=C";
    }else if (c>=70&&c<75)
    {
        cout<<"\nGrade in course 3=C+";
    }else if (c>=75&&c<80)
    {
        cout<<"\nGrade in course 3=B";
    }else if (c>=80&&c<85)
    {
        cout<<"\nGrade in course 3=B+";
    }else if (c>=85&&c<90)
    {
        cout<<"\nGrade in course 3=A";
    }else if (c>=90&&c<=100)
    {
        cout<<"\nGrade in course 3=A+";
    }    
}
if (d<0)
{
    cout<<"Invalid mark";
}else {
    if (d>=0&&d<50)
    {
        cout<<"\nGrade in course 4=F";
    }else if (d>=50&&d<60)
    {
        cout<<"\nGrade in course 4=D";
    }else if (d>=60&&d<65)
    {
        cout<<"\nGrade in course 4=D+";
    }else if (d>=65&&d<70)
    {
        cout<<"\nGrade in course 4=C";
    }else if (d>=70&&d<75)
    {
        cout<<"\nGrade in course 4=C+";
    }else if (d>=75&&d<80)
    {
        cout<<"\nGrade in course 4=B";
    }else if (d>=80&&d<85)
    {
        cout<<"\nGrade in course 4=B+";
    }else if (d>=85&&d<90)
    {
        cout<<"\nGrade in course 4=A";
    }else if (d>=90&&d<=100)
    {
        cout<<"\nGrade in course 4=A+";
    }    
}
if (e<0)
{
    cout<<"Invalid mark";
}else {
    if (e>=0&&e<50)
    {
        cout<<"\nGrade in course 5=F";
    }else if (e>=50&&e<60)
    {
        cout<<"\nGrade in course 5=D";
    }else if (e>=60&&e<65)
    {
        cout<<"\nGrade in course 5=D+";
    }else if (e>=65&&e<70)
    {
        cout<<"\nGrade in course 5=C";
    }else if (e>=70&&e<75)
    {
        cout<<"\nGrade in course 5=C+";
    }else if (e>=75&&e<80)
    {
        cout<<"\nGrade in course 5=B";
    }else if (e>=80&&e<85)
    {
        cout<<"\nGrade in course 5=B+";
    }else if (e>=85&&e<90)
    {
        cout<<"\nGrade in course 5=A";
    }else if (e>=90&&e<=100)
    {
        cout<<"\nGrade in course 5=A+";
    }    
}
int t=a+b+c+d+e;
cout<<"\nTotal marks of 5 courses="<<t;
int g=t/5;
if (g<0)
{
    cout<<"Invalid grade";
}else {
    if (g>=0&&g<50)
    {
        cout<<"\nGrade of total marks=F";
    }else if (g>=50&&g<60)
    {
        cout<<"\nGrade of total marks=D";
    }else if (g>=60&&g<65)
    {
        cout<<"\nGrade of total marks=D+";
    }else if (g>=65&&g<70)
    {
        cout<<"\nGrade of total marks=C";
    }else if (g>=70&&g<75)
    {
        cout<<"\nGrade of total marks=C+";
    }else if (g>=75&&g<80)
    {
        cout<<"\nGrade of total marks=B";
    }else if (g>=80&&g<85)
    {
        cout<<"\nGrade of total marks=B+";
    }else if (g>=85&&g<90)
    {
        cout<<"\n Grade of total marks=A";
    }else if (g>=90&&g<=100)
    {
        cout<<"\nGrade of total marks=A+";
    }    
}
   return 0;
}