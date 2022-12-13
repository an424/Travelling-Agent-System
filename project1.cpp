#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>
using namespace std;
void menu();

class ManageMenu
{
protected:
    string userName;//hide admin name

public:
    ManageMenu()
    {
        system("color 0A");//Change Terminal clr
        cout<<"\n\n\n\n\n\n\n\n\n\n\t Enter Your Name to continue as an admin:";
        cin>>userName;
        system("CLS");
        menu();
    }
    ~ManageMenu(){}

};


class customers
{
public:
    string name,gender,address;
    int age,mobileNo;
    static int cusID;
    char all[999];

    void getDetails()
    {
        ofstream out("old-customers.txt ",ios::app);
        {
            cout<<"Enter Customer ID:";
            cin>>cusID;
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter age:";
            cin>>age;
            cout<<"Enter mobileNO:";
            cin>>mobileNo;
            cout<<"Enter address:";
            cin>>address;
            cout<<"Enter gender:";
            cin>>gender;
        }

        out<< "\n customer ID:"<<cusID<<"\nName:"<<name<<"\n age:"<<age<<"\n mobileNo"<<mobileNo<<"\n address:"<<address<<"\n gender"<<gender<<endl;
        out.close();
        cout<<"\n saved \n note: We Save Your Details record for future purpose \n"<<endl;


    }

    void showDetails()
    {
        ifstream in("old-customers.txt");
        {
            if(!in)
            {
                cout<<"file error!:"<<endl;
            }
            while(!(in.eof()))
                  {

                      in.getline(all,999);
                      cout<< all <<endl;
                  }
                  in.close();
        }

    }
};
int customers :: cusID;

class cabs
{
public:
    int cabChoice;
    int kilometers;
    float cabCost;
    static float lastcabCost;
    void cabDetails()
    {
        cout<<"we collaborated the fastest,safest,and smartest cab service around the country"<<endl;
        cout<<"---------------ABC Cabs-------------- \n"<<endl;
        cout<<"1.Rent a standard Cab- Rs 15 for 1 km "<<endl;
        cout<<"2.Rent a luxury cab - Rs 25 per 1Km "<<endl;

        cout<<"\n To calculate the cost for your journey :"<<endl;
        cout<<"Enter which kind of cab you need:";
        cin>>cabChoice;
        cout<<"Enter kilometers you have to travel:";
        cin>>kilometers;
        int hireCab;
        if(cabChoice==1)
        {
            cabCost=(kilometers *15);
            cout<<"\n Your tour cost"<<cabCost<<"rupees for Standard Cab"<<endl;
            cout<<"Press  1 to hire this cab:or ";
            cout<<"Press 2 to select another cab: ";
            cin>>hireCab;

            system("CLS");
            if(hireCab==1)
            {
                lastcabCost=cabCost;
                cout<<"\n You successfully hired a standard cab"<<endl;
                cout<<"Go to Menu  and take the receipt"<<endl;

            }
            else if(hireCab==2)
            {

                cabDetails();
            }
            else
            {
                cout<<"Invalid Input! Redirecting to previous menu \n Please Wait"<<endl;
                Sleep(999);
                system("CLS");
                cabDetails();

            }
        }
        else if(cabChoice==2)
        {
            cabCost=(kilometers * 25);
            cout<<"\n Your tour cost"<< cabCost <<"Rupees for Standard Cab"<<endl;
            cout<<"Press  1 to hire this cab:or ";
            cout<<"Press 2 to select another cab: ";
            cin>>hireCab;

            system("CLS");
            if(hireCab==1)
            {
                lastcabCost=cabCost;
                cout<<"\n You successfully hired a standard cab"<<endl;
                cout<<"Go to Menu  and take the receipt"<<endl;

            }
            else if(hireCab==2)
            {

                cabDetails();
            }
            else
            {
                cout<<"Invalid Input! Redirecting to previous menu \n Please Wait"<<endl;
                Sleep(1100);
                system("CLS");
                cabDetails();
        }
        }
        else{
            cout<<"Invalid Input ! Redirecting to previous Main menu \n Please Wait"<<endl;
            Sleep(1100);
            system("CLS");
            //menu();
        }
        cout<<"\n Press 1  to Redirect Main Menu:";
        cin>>hireCab;
        system("CLS");
        if(hireCab==1)
        {

            menu();
        }
        else
        {

            menu();
        }

    }
};
float cabs::lastcabCost;
class booking
{
public:
    int choiceHotels;
    int packChoice;
    static float hotelCost;

    void hotels()
    {
        string hotelNo[]= {"Avendra","ChoiceYou","ElephantBay"};
        for(int a=0;a<3;a++){
            cout<<(a+1)<<". Hotel"<<hotelNo[a]<<endl;
        }

        cout<<"\n Currently we collaborated with above hotels "<<endl;
        cout<<"Press any key to back or enter number of the hotel you want to book:";
        cin>>choiceHotels;
        system("CLS");


        if(choiceHotels==1)
        {
            cout<<" \n ----------Welcome to Avendra--------------- \n";
            cout<<"the Garden ,Food and beverage.Enjoy all you can drink ,Stay Cool and get chi,led in the summer sun."<<endl;
            cout<<"1. Standard Pack"<<endl;
            cout<<"\t All Basic facilities you just need for : Rs 5000.00:"<<endl;
            cout<<"2.Enjoy Premium : Rs 10000.00"<<endl;
            cout<<"\t Live a premium at Avendra:Rs 10000.00 \t"<<endl;
            cout<<"3. Luxury Pack :Rs 15000.00"<<endl;
            cout<<"\t Live a Luxury at Avendra: Rs 15000.00 \t"<<endl;

            cout <<"\n Press another key To back or  \n Enter the Package Number you want to Book:";
            cin>>packChoice;


            if(packChoice==1)
            {

                hotelCost= 5000.00;
                cout<<"\n You have successfully booked Standard Pack at Avendra \n"<<endl;
                cout<<"\n Go To Menu and Take the receipt \n"<<endl;

            }
            else if(packChoice==2)
            {

                hotelCost= 10000.00;
                cout<<"\n You have Successfully booked Premium pack at Avendra: \n"<<endl;
                cout<<"Go to the Menu and Tame the receipt \n"<<endl;

            }
            else if(packChoice==3)
            {
                hotelCost= 15000.00;
                cout<<"\n You have successfully booked Luxury pack at Avendra: \n"<<endl;
                cout<<"Go to the Menu and Take the Receipt \n"<<endl;

            }
            else
            {
                cout<<"INVALID INPUT! Redirecting to previous Menu \n Please Wait!"<<endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotomenu;
            cout<<"\n Press 1 to redirect Main Menu";
            cin>>gotomenu;
            if(gotomenu==1)
            {

                //menu()
            }
            else{
                //menu()
            }
        }
        if(choiceHotels==2)
        {
             cout<<" \n ----------Welcome to ChoiceYou--------------- \n";
            cout<<"the Garden ,Food and beverage.Enjoy all you can drink ,Stay Cool and get chi,led in the summer sun."<<endl;
            cout<<"1. Standard Pack"<<endl;
            cout<<"2. \t All Basic facilities you just need for : Rs 7000.00:"<<endl;
            cout<<"\t Enjoy Premium : Rs 14000.00"<<endl;
            cout<<"3. Luxury Pack :Rs 19000.00"<<endl;
            cout<<"\t Live a Luxury at ChoieYou: Rs 19000.00"<<endl;

            cout <<"\n Press another key To back or  \n Enter the Package Number you want to Book:";
            cin>>packChoice;

            if(packChoice==1)
            {
                hotelCost=7000;
                cout<<"\n You have Successfully booked Standard Pack at ChoiceYou \n";
                cout<<"\n Go to the main menu and take the receipt \n";

            }
            if(packChoice==2)
            {
                hotelCost=14000;
                cout<<"\n You have successfully booked premium pack at ChoiceYou \n";
                cout<<"\n Go to the main menu and take the receipt \n";
            }
            if(packChoice=3)
            {
                hotelCost=19000;
                cout<<"\n You have Successfully booked Luxury pack at ChoiceYou \n";
                cout<<"\n Go to the main menu and take the receipt \n";
            }

        }
        if(choiceHotels==3)
        {


            cout<<" \n ----------Welcome to ElephantBay--------------- \n";
            cout<<"The Garden ,Food and beverage.Enjoy all you can drink ,Stay Cool and get chi,led in the summer sun."<<endl;
            cout<<"1. Standard Pack"<<endl;
            cout<<"2. \t All Basic facilities you just need for : Rs 5500.00:"<<endl;
            cout<<"\t Enjoy Premium : Rs 11000.00"<<endl;
            cout<<"3. Luxury Pack :Rs 16000.00 "<<endl;
            cout<<"\t Live a Luxury at ElehantBay: Rs 16000.00"<<endl;

            cout <<"\n Press another key To back or  \n Enter the Package Number you want to Book:";
            cin>>packChoice;

            if(packChoice==1)
            {
                hotelCost=5500;
                cout<<" \n You have successfully booked standard pack at ElephantBay \n";
                cout<<"\n Go to the main menu and take the receipt \n ";
            }
            if(packChoice==2)
            {

                hotelCost=11000;
                cout<<"\n You have successfully booked premium pack at ElephantBay \n";
                cout<<"\n Go to the main menu and take the receipt\n";

            }
            if(packChoice==3)
            {

                hotelCost=16000;
                cout<<"\n You have Successfully booked Luxury pack at ElephantBay \n";
                cout<<"\n Go to the main menu and take the receipt \n";
            }
            else
            {
                cout<<"INVALID INPUT! Redirecting to previous Menu \n Please Wait!"<<endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotomenu;
            cout<<"\n press 1 to redirect Main Menu";
            cin>>gotomenu;
            if(gotomenu==1)
            {

                menu();
            }
            else{
                    menu();
            }
        }

        }
};
float booking::hotelCost;
class charges : public booking,cabs,customers
{
public:
    void printBill()
    {
        ofstream outf("receipt.txt");
        {

            outf<<"-----------A&G Travel Agency-------------"<<endl;
            outf<<"---------------Receipt-------------------"<<endl;
            outf<<"-----------------------------------------"<<endl;


            outf<<"CustomerID:"<<customers::cusID<<endl<<endl;
            outf<<"Description\t\t Total"<<endl;
            outf<<"Hotel Cost:\t\t"<<fixed<<setprecision(2)<<booking::hotelCost<<endl;
            outf<<"Travel (cab) cost:\t"<<fixed<<setprecision(2)<<cabs::lastcabCost<<endl;


            outf<<"------------------------------"<<endl;
            outf<<"Total Charge:\t\t"<<fixed<<setprecision(2)<<booking::hotelCost+cabs::lastcabCost<<endl;
            outf<<"------------THANK YOU-----------"<<endl;




        }
        outf.close();

    }
    void showBill()
    {

        ifstream inf("receipt.txt");
        {

            if(!inf)
            {
                cout<<"File opening error!"<<endl;
            }
            while(!(inf.eof()))
            {
                inf.getline(all,999);
                cout<<all<<endl;
            }
        }
        inf.close();
    }


};
void menu()
{
    int mainChoice;
    int inChoice;
    int gotoMenu;






    cout<<"\t\t *A&G Travels *\n"<<endl;
    cout<<"---------------------Main Menu--------------"<<endl;


    cout<<"\t|------------------------|\t"<<endl;
    cout<<"\t|                        |\t"<<endl;
    cout<<"\t| Customer Management ->1|\t"<<endl;
    cout<<"\t| Cabs Management     ->2|\t"<<endl;
    cout<<"\t| Bookings Management ->3|\t"<<endl;
    cout<<"\t| Charges & Bill      ->4|\t"<<endl;
    cout<<"\t| Exit                ->5|\t"<<endl;
    cout<<"\t|                        |\t"<<endl;
    cout<<"\t|------------------------|\t"<<endl;

    cout<<"\n Enter Your Choice:";
    cin>>mainChoice;



    system("CLS");


    customers a2;
    cabs a3;
    booking a4;
    charges a5;


    if(mainChoice==1)
    {
        cout<<"-----Customers-----\n"<<endl;
        cout<<"1.Enter New Customer"<<endl;
        cout<<"2.See old Customer"<<endl;

        cout<<"\n Enter Choice: ";
        cin>>inChoice;


        system("CLS");
        if(inChoice==1)
        {
            a2.getDetails();
        }
        else if(inChoice==2)
        {
             a2.showDetails();
        }
        else
        {
            cout<<"INVALID INPUT! Redirecting to previous menu \n wait!"<<endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
        cout<<"\n Press 1 to Redirect main Menu:";
        cin>>gotoMenu;
        system("CLS");
        if(gotoMenu==1)
        {
            menu();
        }
        else
        {

            menu();
        }

    }

    else if(mainChoice==2)
    {
        a3.cabDetails();


    }
    else if(mainChoice==3)
    {
        cout<<"---->Book a Luxury Hotel Using The system<--"<<endl;

        a4.hotels();
    }
    else if(mainChoice==4)
    {
        cout<<"---->Get Your Receipt<----"<<endl;
        a5.printBill();
        cout<<"Your Receipt is already printed you can get it from file path \n"<<endl;
        cout<<"To display the your receipt kin the screen ,Enter 1: or Enter another Key to Back Main Menu:";
        cin>>gotoMenu;
        if(gotoMenu==1)
        {

            system("CLS");
            a5.showBill();
            cout<<"\n Press 1 redirect main menu:   ";
            cin>>gotoMenu;
            system("CLS");
            if(gotoMenu==1)
            {

                menu();
            }
            else{
                menu();
            }

        }
        else
        {

            system("CLS");
            menu();
        }

    }

    else if(mainChoice==5)
    {
        cout<<"------GOOD BYE----"<<endl;
        Sleep(999);
        system("CLS");
        menu();
    }
    else
    {
        cout<<"INVALID INPUT ! Redirecting to previous Menu \n Please Wait!"<<endl;
        Sleep(1100);
        system("CLS");
        menu();
    }


}


int main()
{
    ManageMenu startobj;

    return 0;

}
