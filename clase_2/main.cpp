#include <iostream>

using namespace std;

int main()
{
   int num1,num2,num3;
   cout <<"ingrese el primer numero: ";
   cin >>num1;
   cout <<"ingrese el segundo numero: ";
   cin >>num2;
   cout<<"ingrese el tercer numero: ";
   cin >> num3;
   if  (num1>num2 && num1>num3)
   {
        cout <<""<<endl;
        cout <<"el numero 1: "<<num1<<" es mayor";
   }

   else {

    if (num2>num1&&num2>num3)
    {
        cout <<""<<endl;
        cout <<"el numero 2: "<<num2<<" es mayor";
    }
    else{
        cout <<""<<endl;
        cout <<"el numero 3: "<<num3<<" es mayor"<<endl;
    }
   }



    return 0;
}
