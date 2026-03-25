#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int choice;
    double num1,num2,angle,result;
    do{
        cout<<"\n=====SIMPLE CALCULATOR=====\n";
        cout<<"1.additio=n(+) \n";
        cout<<"2.substraction(-) \n";
        cout<<"3.multiplication(*) \n";
        cout<<"4.division (/) \n";
        cout<<"5.square root\n";
        cout<<"6.sin\n";
        cout<<"7.cosine\n";
        cout<<"8.tangent\n";
        cout<<"9.exit\n";
        cout<<"enter your choice:";
        cin>>choice;
        //agar choice 1 se 4 ke beech me hai to 2 number maage
        if(choice>=1 && choice<=4){
            cout<<"enter first number";
            cin>>num1;
            cout<<"enter second number";
            cin>>num2;
            }
            //agar choice square root 5 hai to ek number maage
            else if(choice==5){
                cout<<"enter number:";
                cin>>num1;
            }
            else if(choice==6){
                cout<<"enter angle in degrees:";
                cin>>angle;
            }
            //convert degree to radians
            double radians = angle * M_PI/180.;
            switch (choice){
                case 1:
                cout<<"result="<<num1+num2<<endl;
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
                else cout<<"error!division by zero not allowed>\n";

                break;
                case 5:
                if(num1>=0) cout<<"result="<< sqrt(num1);
                else cout<<"negative number ka root nhi nikalta.\n";
                break;
                case 6:
                result = sin(radians);
                cout << "sin(" << angle << ") = " << result << endl;
                break;
                case 7:
                result = cos(radians);
                cout << "cos(" << angle << ") = " << result << endl;
                break;
                case 8:
                result = tan(radians);
                cout << "tan(" << angle << ") = " << result << endl;
                break;

                case 9:
                cout<<"thankyou for using calculator\n";
                break;
                default:if(choice!=10)
                cout<<"invalid choice!try again\n";
            }
    }while (choice!=9 );
    return 0;
}
