#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    int choice;
    string username, password, user, pass;

    do{
        cout<<"\n===== LOGIN & REGISTRATION SYSTEM =====";
        cout<<"\n1.Register";
        cout<<"\n2.Login";
        cout<<"\n3.Exit";
        cout<<"\nEnter Choice:";
        cin>>choice;

        switch(choice){
            case1:
            cout<<"\nEnter Username:";
            cin>>username;
            cout<<"\nEnter password:";
            cin>>password;

            {
                ofstream file ("users.txt",ios::app);
                file<<username<<""<<password<<endl;
                file.close();
            }

            cout<<"Registration Successful!"<<endl;
            break;

            case 2:
            cout<<"\nEnter Username:";
            cin>>username;
            cout<<"Enter Password:";
            cin>>password;

            {
                ifstream file("users.txt");
                bool found=false;

                while(file>>user>>pass)
                {
                    if(user==username && pass== password){
                        found = true;
                        break;
                    }
                }
                file.close();

                if(found)
                cout<<"invalid Username or password!\n";
            }
break;

case 3:
cout<<"Thank You!\n";
break;

default:
cout<<"invalid choice!\n";
        }

    } while(choice!=3);

    return 0;
}
