#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
class shopping
{

private:
    int id;
    float price;
    float dis;
    string pname;

public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};
void shopping::menu()
{
    m:
    int choice;
    string email;
    string password;
    cout<<"\t\t\t\t\t------------------------------\n";
    cout<<"\t\t\t\t\t                              \n";
    cout<<"\t\t\t\t\t                              \n";
    cout<<"\t\t\t\t\t     Super Market Billing     \n";
    cout<<"\t\t\t\t\t                              \n";
    cout<<"\t\t\t\t\t                              \n";
    cout<<"\t\t\t\t\t------------------------------\n";
    cout<<"\t\t\t\t\t                              \n";
    cout<<"\t\t\t\t\t|       1)Adminstrator       |\n";
    cout<<"\t\t\t\t\t                              \n";
    cout<<"\t\t\t\t\t|       1)Buyer              |\n";
    cout<<"\t\t\t\t\t                              \n";
    cout<<"\t\t\t\t\t|       1)Exit               |\n";
    cout<<"\t\t\t\t\t                              \n";
    cout<<"\t\t\t\t\tPlease select                 \n";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"\t\t\t\t Please Login\n";
        cout<<"\t\t\t\t Enter Email\n";
        cin>>email;
        cout<<"\t\t\t\t Password\n";
        cin>>password;
        if(email =="srinjay@gmail.com" && password=="1234"){
            cout<<"WELCOME BOSS";
            administrator();
        }
        else{
            cout<<"Invalid email/password";
        }
        break;

        case 2:{
            buyer();
            break;
        }
        case 3: exit(0);
        default:cout<<"Please select from the given option";

    }
    goto m;
}
void shopping::administrator()
{
    m:
    int choice;
    cout<<"\n\n\n\t\t\tAdminidtrator Menu";
    cout<<"\n\t\t\t|___1)Add the product________|";
    cout<<"\n\t\t\t|                            |";
    cout<<"\n\t\t\t|___2)Modify the product_____|";
    cout<<"\n\t\t\t|                            |";
    cout<<"\n\t\t\t|___3)Delete the product_____|";
    cout<<"\n\t\t\t|                            |";
    cout<<"\n\t\t\t|___4)Back to main menu the__|";
    cout<<"\n\n\tPlease enter your choice";
    cin>>choice;
    switch (choice)
    {
    case 1:add();
        break;
    case 2:edit();
        break;
    case 3:rem();
        break;
    case 4:menu();
        break;
    default:
        cout<<"Invalid Choice!";
    }
    goto m;

}
void shopping::buyer()
{

}
void shopping::add()
{
}
void shopping::edit()
{
}
void shopping::rem()
{
}
void shopping::list()
{
}
void shopping::receipt()
{
}
int main()
{

    return 0;
}