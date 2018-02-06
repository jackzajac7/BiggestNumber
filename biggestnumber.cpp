//Author: Aero Zajac
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{

        int num1=0;
        int num2=0;
        int biggest=0;


        cout<<"Please enter a whole number:\n";

        cin>>num1;

        cout<<"Please enter another whole number:\n";

        cin>>num2;

        if(num1>num2) {
                biggest = num1;
        }
        else if(num2>num1) {
                biggest = num2;
        }
        else {
                cout<<"You entered in the same value or non whole numbers.";
        }

        cout<<"Of those two numbers, the biggest is: "<<biggest<<endl;
        cout<<endl<<"Thank you for playing.\n";

        return 0;
}
