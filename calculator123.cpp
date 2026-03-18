#include <iostream>
using namespace std;
int main (){
    int choice;
    double num1,num2;
    do{
        cout<<"\n=====SIMPLE CALCULATOR=====
";
        cout<<"1.addition(+) \n";
        cout<<"2.substraction(-) \n";
        cout<<"3.multiplication(*) \n";
        cout<<"4.division (/) \n";
        cout<<"5.square root\n";
        cout<<"6.exit\n";
        cout<<"enter your choice:";
        cin>>choice;
        // agar choice 1 se 4 ke beech hai to two number maagega
        if(choice>=1 && choice<=4){
            cout<<"enter first number";
            cin>>num1;
            cout<<"enter second number";
            cin>>num2;
            }
        //agar choice square root 5 hai to ek number maagega
        else if(choice==5){
            cout<<"enter number:";
            cin>>num1;
        }
            switch (choice){
                case 1:
                cout<<"result="<<num1 + num2<<endl;
                break;
                case 2:
                cout<<"result="<<num1 - num2<<endl;
                break;
                case 3:
                cout<<"result="<<num1 * num2<<endl;
                break;
                case 4:
                if (num2!=0)
                cout<<"result="<<num1 / num2<<endl;
                else cout<<"error!division by zero not allowed\n";
                break;
                case 5:
                if (num>=0) cout<<"result="<< sqrt(num1);
                else cout<<"negative number ka root nhi nikalta.\n";
                case 6:
                cout<<"thankyou for using calculator\n";
                break;
                default:if(choice!=6)
                cout<<"invalid choice!try again\n";
            }
    }while (choice!=6);
    return 0;
}
