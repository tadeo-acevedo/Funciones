//Tadeo Acevedo Jean Carlos 2AV4
#include <iostream>
using namespace std;
int main()
{
  int i,fact=1,n;
  cout<<"Introduce un numero: ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
      fact=fact*i;
  }
  cout<<"El Factorial de " <<n<<" es: "<<fact<<endl;
  return 0;
}

