#include <iostream>

using namespace std;
class student
{
private:

  int a;
  int b;
  string name;
  int age;

public:
    student (string s, int x)
  {
    name = s;
    age = x;
  }
  student ()
  {

  }
  student (int x, int y)
  {
    a = x;
    b = y;
  }
  student operator + (student & y)
  {
    student s1;
    s1.a = y.a + a;
    s1.b = y.b + b;
    return s1;

  }
  student operator - ()
  {
    student s1;
    s1.a = -a;
    s1.b = -b;
    return s1;

  }
  void show ()
  {
    cout << a << " " << b;
    cout<<endl;
  }
  friend ostream & operator  << (ostream & out, student & obj);
  friend istream & operator  >> (istream & in, student & obj);


};

ostream & operator  << (ostream & out, student & obj)
{
  cout << "Name is " << obj.name << " Age " << obj.age << endl;
  return out;

}

istream & operator  >> (istream & in, student & obj)
{
  cout << "Enter Name" << endl;
  cin >> obj.name;
  cout << "Enter Age" << endl;
  cin >> obj.age;
  return in;
}


int main ()
{
  student s (2, 1);
  student s2 (3, 4);
  student t = s + s2;
  t.show ();
  t = -s2;
  t.show ();
  
  student s3;
  cin>>s3;
  cout<<s3;


  return 0;
}
