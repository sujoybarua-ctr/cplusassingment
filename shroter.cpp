#include<iostream>
using namespace std;
int main()
{
int marks,total=0,avgmarks;
string grade,ovgrade;
float gpa, gpatot=0.00,ovgpa;
for (int i = 1; i <=5; i++)
{
    cout<<"Enter your marks for course "<<i<<"(out of 100)=";
    cin>>marks;
    if (marks>=90&&marks<=100)
    {
  grade="A+";
  gpa=4.0;      
    }else if (marks>=85)
    {
        grade="A";
        gpa=3.75;
    }else if (marks>=80)
    {
        grade="B+";
        gpa=3.50;
    }else if (marks>=75)
    {
        grade="B";
    gpa=3.25;
    }else if (marks>=70)
    {
        grade="C+";
        gpa=3.00;
    }else if (marks>=65)
    {
    grade="C";
    gpa=2.75;
    }else if (marks>=60)
    {
        grade="D+";
        gpa=2.50;
    }else if (marks>=50)
    {
        grade="D";
        gpa=2.25;
    }else {grade="F"; gpa=0.00;
    }
    total+=marks;
    cout<<"Grade for course "<<i<<"="<<grade<<endl;
    gpatot+=gpa;
     ovgpa=gpatot/5;
avgmarks=total/5;
if (avgmarks>=90&&avgmarks<=100)
{
    ovgrade="A+";
}else if (avgmarks>=85)
{
    ovgrade="A";
}else if (avgmarks>=80)
{
    ovgrade="B+";
}else if (avgmarks>=75)
{
    ovgrade="B";
}else if (avgmarks>=70)
{
    ovgrade="C+";
}else if (avgmarks>=65)
{
    ovgrade="C";
}else if (avgmarks>=60)
{
    ovgrade="D+";
}else if (avgmarks>=50)
{
    ovgrade="D";
}else ovgrade="F";
}
cout<<"Totoal obtained marks="<<total<<endl;
cout<<"Overall GPA="<<ovgpa<<endl;
cout<<"Overall grade="<<ovgrade;
    return 0;
}