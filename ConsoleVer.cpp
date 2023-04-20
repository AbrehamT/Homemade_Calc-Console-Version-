#include <iostream>
#include "ConsoleVer.h"
using namespace std;

int main(){
    cout<<"Enter left operand**\n";
    long double x;
    cin>>x;
    cout<<"Enter right operand**\n";
    long double y;
    cin>>y;
    Calculator calc(x, y);

    char operation = 'y';
    while (operation == 'y'){
        cout<<"Enter desired operation using symbols(+, -, *, / ):\n";
        cin>>operation;
        switch (operation)
        {
        case '+':
            cout<<x<<" + "<<y<<" = "<<calc.sum()<<endl;
            cout<<"Would you like to do more calculation?(y/n)\n**";
            cin>>operation;
            break;
        case '-':
            cout<<x<<" - "<<y<<" = "<<calc.diff()<<endl;
            cout<<"Would you like to do more calculation?(y/n)\n**";
            cin>>operation;
            break;
        case '*':
            cout<<x<<" * "<<y<<" = "<<calc.prod()<<endl;
            cout<<"Would you like to do more calculation?(y/n)\n**";
            cin>>operation;
            break;
        case '/':
            cout<<x<<" / "<<y<<" = "<<calc.qouti()<<endl;
            cout<<"Would you like to do more calculation?(y/n)\n**";
            cin>>operation;
            break;                      
        default:
            cout<<"You have not entered desired operation. Retry\n";
            operation = 'y';
            break;
        }
    }
}