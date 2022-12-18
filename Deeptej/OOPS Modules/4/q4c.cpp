#include <iostream>
#include <exception>

using namespace std;

void fun1()
{
  cout << "In fun1" << endl;
  throw exception(); 
}

void fun2()
{
  cout << "In fun2" << endl;
  fun1(); 
}

int main()
{
  try
  {
    cout << "In main function" << endl;
    fun2(); 
  }
  catch (exception& e)
  {
    cout << "Exception caught: " << e.what() << endl;
  }
  return 0;
}