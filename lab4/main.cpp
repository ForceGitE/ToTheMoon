#include <iostream>

using namespace std;

/**
* base class called Storage_Bank
*/

class Storage_Bank

{
public:

    int get_time();// returns the set time

    void getData(double temps)// prints the data
    {
        data = temps;
        cout<<data<<endl;
    }

   void setData(double d)  // function to set data
    {
       getData(d);

    }


    void devices(int a)  // sets the device
    {
        address[0] = a ;
    }

    void set_time(int i){
        timer = i;

    }

protected:
    int address[10];
    double data;
    int i;
    int timer;
    int x,y,z;

};

class Time: public Storage_Bank // inherits storage bank class functions and variables
{
public:

int get_time()
{
    return timer;
}

};

class Display : public Storage_Bank // inherits storage bank class functions and variables
{

public:

    void login_menu()
    {
        cout<<"1.User"<< endl;
        cout<<"2.Admin"<< endl;
        cin>>x;

        switch(x)
        {

        case 1:
         User_menu();
            break;

        case 2:
        Admin_menu();
            break;

        default:
            break;

        }
    }

    void User_menu()
    {
        cout<<"1.realtime"<< endl;
        cout<<"2.historical"<< endl;
         cout<<"3.Return"<< endl;
         cin>>y;

        switch(y)
        {

        case 1:
            getData(data);
            break;

        case 2:
            getData(data);
            break;

        case 3:
            login_menu();
            break;

        default:
            break;

        }


    }


    void Admin_menu()
    {
        cout<<"1.download"<< endl;
        cout<<"2.clear"<< endl;
        cout<<"3.Exit"<< endl;
        cin>>z;
        switch(z)
        {

        case 1:
            getData(data);
            break;

        case 2:
            break;

        case 3:
            login_menu();
            break;

        default:
            break;

        }
    }

};



int main()
{



    Display Dis;
    Dis.login_menu();

 Storage_Bank Temperature;

    Storage_Bank Dev;

    Temperature.setData(11.25);

    Dev.devices(1);



    return 0;
}
