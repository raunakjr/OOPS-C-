#include <iostream>

using namespace std;
class A{
   
   private:
   int a,b;
   public:
   A()
   {
       a=2;
       b=3;
   }
   friend void f(A obj);
   friend class B;
};
void f(A obj)
{
    cout<<obj.a+obj.b<<endl;
}
class B{
    
    public:
    void f2( A obj)
    {
        cout<<obj.a-obj.b<<endl;
    }
};
int main()
{
   A obj;
   f(obj);
   B obj1;
   
   obj1.f2(obj);
   return 0;
}
