/******************************************************************************
In C++, stream insertion operator “<<” is used for output and extraction operator “>>” is used for input. 
We must know the following things before we start overloading these operators. 
1) cout is an object of ostream class and cin is an object of istream class 
2) These operators must be overloaded as a global function. And 
if we want to allow them to access private data members of the class, we must make them friend. 
Why these operators must be overloaded as global? 
In operator overloading, if an operator is overloaded as a member, 
then it must be a member of the object on the left side of the operator.
For example, consider the statement “ob1 + ob2” (let ob1 and ob2 be objects of two different classes). 
To make this statement compile, we must overload ‘+’ in a class of ‘ob1’ or make ‘+’ a global function. 

*******************************************************************************/

#include <iostream>

using namespace std;
class student
{
    private:
    string name;
    int age;
    public:
    student(string s, int x)
    {
        name=s;
        age=x;
    }
    friend ostream &operator  <<(ostream &out, student &obj);
    friend istream &operator  >>(istream &in, student &obj);
    
    
};
ostream &operator  <<(ostream &out, student &obj)
{
    cout<<"Name is "<<obj.name<<" Age "<<obj.age<<endl;
    return out;
    
}
istream &operator  >>(istream &in, student &obj)
{
    cout<<"Enter Name"<<endl;
    cin>>obj.name;
    cout<<"Enter Age"<<endl;
    cin>>obj.age;
    return in;
}
int main()
{
    student s("Raunak",22);
    cout<<s;
    cin>>s;
    cout<<s;
   return 0;
}
