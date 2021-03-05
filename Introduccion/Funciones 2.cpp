//Tadeo Acevedo Jean Carlos 2AV4
#include<iostream>
using namespace std;

void Max(int a, int b);

int main()
{
  int a, b;
  cout<<"Introduzca El Valor Del Primer Numero: ";
  cin>>a;
  cout<<"Introduzca El Valor Del Segundo Numero: ";
  cin>>b;
  Max(a,b);
  return 0;
}

void Max(int a, int b)
{
    if (a>b)
    {
     cout<<"Es Mayor: "<<a;
    }
    else if(a<b)
    {
     cout<<"Es Mayor "<<b;
    }
    else
     cout<<"Error ";
}
