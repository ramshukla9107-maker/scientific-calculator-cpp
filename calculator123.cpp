#include <iostream>
using namespace std;
int main (){
    int choice;
    double num1,num2;
    do{
        cout<<"\n=====SIMPLE CALCULATOR=====\n";
        cout<<"1.addition(+) \n";
        cout<<"2.substraction(-) \n";
        cout<<"multiplication(*) \n";
        cout<<"division (/) \n";
        cout<<"enter your choice:";
        cin>>choice;
        if(choice>=1 && choice<=4){
            cout<<"enter first number";
            cin>>num1;
            cout<<"enter second number";
            cin>>num2;
            }
            switch (choice){
                case 1:
                cout<<"result="<<num1 + num2<<endl;
                case 2:
                cout<<"result="<<num1 - num2<<endl;
                case 3:
                cout<<"result="<<num1 * num2<<endl;
                case 4:
                if (num2!=0)
                cout<<"result="<<num1 / num2<<endl;
                else cout<<"error!division by zero not allowed>\n";
                break;
                case 5:
                cout<<"thankyou for using calculator\n";
                break;
                default:
                cout<<"invalid choice!try again>\n";
            }
    }while (choice!=5);
    return 0;
}