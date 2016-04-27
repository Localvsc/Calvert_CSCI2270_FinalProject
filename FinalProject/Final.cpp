/*
Lucas Calvert
4/18/16
Instructor: Hoenigman
Final Project
*/



#include <iostream>
#include "CommunicationNetwork.h"
#include <fstream>
#include <sstream>
#include <cstdlib>

using namespace std;



int main()
{

    bool number1 = false;
    bool number2 = false;
    int extraCtr = 0;
   CommunicationNetwork CN1;
    CommunicationNetwork CN2;
    int choice;
    /////////////////////////////////////////////////    Menu

    cout << "======Main Menu======" << endl;                        //What the menu will look like
    cout<<"1. Build Main Network"<<endl;
    cout<<"2. Build Extra Network From File"<<endl;
    cout<<"3. Print Network Path"<<endl;
    cout<<"4. Transmit Message Coast-To-Coast-To-Coast"<<endl;
    cout<<"5. Merge Networks"<<endl;
    cout<<"6. Find Distance Between Cities"<<endl;
    cout<<"7. Find Total Network Length"<<endl;
    cout<<"8. Add City"<<endl;
    cout<<"9. Delete City"<<endl;
    cout<<"10. Clear Network"<<endl;
    cout<<"11. Quit"<<endl;
    cin>>choice;
    /////////////////////////////////////////////////
    while(choice!=11){
    if(choice==1){              //Build Network

    CN1.buildNetwork();
    CN1.printNetwork();
    number1 = true;




    //////////////////// Back to main menu
    cout << "======Main Menu======" << endl;
    cout<<"1. Build Main Network"<<endl;
    cout<<"2. Build Extra Network From File"<<endl;
    cout<<"3. Print Network Path"<<endl;
    cout<<"4. Transmit Message Coast-To-Coast-To-Coast"<<endl;
    cout<<"5. Merge Networks"<<endl;
    cout<<"6. Find Distance Between Cities"<<endl;
    cout<<"7. Find Total Network Length"<<endl;
    cout<<"8. Add City"<<endl;
    cout<<"9. Delete City"<<endl;
    cout<<"10. Clear Network"<<endl;
    cout<<"11. Quit"<<endl;
    cin>>choice;
    }
    else if(choice==2){                 //Build extra network

if(extraCtr<1){
        extraCtr++;
    //CommunicationNetwork CN2;

string networkFile;

string rest1;                           //For inputing a city
string first1;
cout << "Enter a file name for the new network: " << endl;
cin >> first1;
getline(cin, rest1);
networkFile = first1 + rest1;



    CN2.newNetwork(networkFile);
    CN2.printNetwork();

}
else{
    cout<<"Maximum number of Communication Networks already exist"<<endl;
}
number2=true;

            //////////////////// Back to main menu
    cout << "======Main Menu======" << endl;
    cout<<"1. Build Main Network"<<endl;
    cout<<"2. Build Extra Network From File"<<endl;
    cout<<"3. Print Network Path"<<endl;
    cout<<"4. Transmit Message Coast-To-Coast-To-Coast"<<endl;
    cout<<"5. Merge Networks"<<endl;
    cout<<"6. Find Distance Between Cities"<<endl;
    cout<<"7. Find Total Network Length"<<endl;
    cout<<"8. Add City"<<endl;
    cout<<"9. Delete City"<<endl;
    cout<<"10. Clear Network"<<endl;
    cout<<"11. Quit"<<endl;
    cin>>choice;

    }
    else if(choice==3){             //Print Network

   // cout<< "===CURRENT PATH==="	<<	endl;
   // cout<<"NULL <- ";
   int networkChoice;
   cout<<"Which network would you like to print? (1 or 2)"<<endl;
   cin>>networkChoice;

   if(networkChoice==1){
        if(number1==true){
            CN1.printNetwork();
        }
        else{
            cout<<"Please build the network first"<<endl;
        }
   }
   else if(networkChoice==2){
        if(number2==true){
            CN2.printNetwork();
        }
        else{
            cout<<"Please build the network first"<<endl;
        }
   }
   else{
    cout<<"Please enter a valid network number (1 or 2)"<<endl;
   }
    // cout<<	"NULL"	<<	endl;
    //cout<<	"=================="	<<	endl;

    //////////////////// Back to main menu
    cout << "======Main Menu======" << endl;
    cout<<"1. Build Main Network"<<endl;
    cout<<"2. Build Extra Network From File"<<endl;
    cout<<"3. Print Network Path"<<endl;
    cout<<"4. Transmit Message Coast-To-Coast-To-Coast"<<endl;
    cout<<"5. Merge Networks"<<endl;
    cout<<"6. Find Distance Between Cities"<<endl;
    cout<<"7. Find Total Network Length"<<endl;
    cout<<"8. Add City"<<endl;
    cout<<"9. Delete City"<<endl;
    cout<<"10. Clear Network"<<endl;
    cout<<"11. Quit"<<endl;
    cin>>choice;
    }
    else if(choice==4){             //Transmit message Coast-To-Coast

char *file = "messageIn.txt";
//char *file = argv[1]
CN1.transmitMsg(file);

   //////////////////// Back to main menu
    cout << "======Main Menu======" << endl;
    cout<<"1. Build Main Network"<<endl;
    cout<<"2. Build Extra Network From File"<<endl;
    cout<<"3. Print Network Path"<<endl;
    cout<<"4. Transmit Message Coast-To-Coast-To-Coast"<<endl;
    cout<<"5. Merge Networks"<<endl;
    cout<<"6. Find Distance Between Cities"<<endl;
    cout<<"7. Find Total Network Length"<<endl;
    cout<<"8. Add City"<<endl;
    cout<<"9. Delete City"<<endl;
    cout<<"10. Clear Network"<<endl;
    cout<<"11. Quit"<<endl;
    cin>>choice;

    }
    else if(choice==5){         //Merge Networks



            //////////////////// Back to main menu
    cout << "======Main Menu======" << endl;
    cout<<"1. Build Main Network"<<endl;
    cout<<"2. Build Extra Network From File"<<endl;
    cout<<"3. Print Network Path"<<endl;
    cout<<"4. Transmit Message Coast-To-Coast-To-Coast"<<endl;
    cout<<"5. Merge Networks"<<endl;
    cout<<"6. Find Distance Between Cities"<<endl;
    cout<<"7. Find Total Network Length"<<endl;
    cout<<"8. Add City"<<endl;
    cout<<"9. Delete City"<<endl;
    cout<<"10. Clear Network"<<endl;
    cout<<"11. Quit"<<endl;
    cin>>choice;


    }
    else if(choice==6){  //Find distance between 2 cities

string startCity;
    string endCity;



string rest1;                           //For inputing a city
string first1;
cout << "Enter the name of the starting city: " << endl;
cin >> first1;
getline(cin, rest1);
startCity = first1 + rest1;

string rest2;                           //For inputing a city
string first2;
cout << "Enter the name of the ending city: " << endl;
cin >> first2;
getline(cin, rest2);
endCity = first2 + rest2;

CN1.findDistance(startCity,endCity);
            //////////////////// Back to main menu
    cout << "======Main Menu======" << endl;
    cout<<"1. Build Main Network"<<endl;
    cout<<"2. Build Extra Network From File"<<endl;
    cout<<"3. Print Network Path"<<endl;
    cout<<"4. Transmit Message Coast-To-Coast-To-Coast"<<endl;
    cout<<"5. Merge Networks"<<endl;
    cout<<"6. Find Distance Between Cities"<<endl;
    cout<<"7. Find Total Network Length"<<endl;
    cout<<"8. Add City"<<endl;
    cout<<"9. Delete City"<<endl;
    cout<<"10. Clear Network"<<endl;
    cout<<"11. Quit"<<endl;
    cin>>choice;


    }
    else if(choice==7){     //Find total network length


CN1.findTotalLength();


        //////////////////// Back to main menu
    cout << "======Main Menu======" << endl;
    cout<<"1. Build Main Network"<<endl;
    cout<<"2. Build Extra Network From File"<<endl;
    cout<<"3. Print Network Path"<<endl;
    cout<<"4. Transmit Message Coast-To-Coast-To-Coast"<<endl;
    cout<<"5. Merge Networks"<<endl;
    cout<<"6. Find Distance Between Cities"<<endl;
    cout<<"7. Find Total Network Length"<<endl;
    cout<<"8. Add City"<<endl;
    cout<<"9. Delete City"<<endl;
    cout<<"10. Clear Network"<<endl;
    cout<<"11. Quit"<<endl;
    cin>>choice;

    }

    else if(choice==8){         //Add city
    string previousCity;
    string newCity;



string rest1;                           //For inputing a city
string first1;
cout << "Enter a new city name: " << endl;
cin >> first1;
getline(cin, rest1);
newCity = first1 + rest1;

string rest2;                           //For inputing a city
string first2;
cout << "Enter a previous city name: " << endl;
cin >> first2;
getline(cin, rest2);
previousCity = first2 + rest2;


   CN1.addCity(previousCity, newCity);

 //////////////////// Back to main menu
    cout << "======Main Menu======" << endl;
    cout<<"1. Build Main Network"<<endl;
    cout<<"2. Build Extra Network From File"<<endl;
    cout<<"3. Print Network Path"<<endl;
    cout<<"4. Transmit Message Coast-To-Coast-To-Coast"<<endl;
    cout<<"5. Merge Networks"<<endl;
    cout<<"6. Find Distance Between Cities"<<endl;
    cout<<"7. Find Total Network Length"<<endl;
    cout<<"8. Add City"<<endl;
    cout<<"9. Delete City"<<endl;
    cout<<"10. Clear Network"<<endl;
    cout<<"11. Quit"<<endl;
    cin>>choice;

    }
     else if(choice==9){            //Delete City
string delCity;
string rest1;                           //For inputing a city
string first1;
cout << "Enter a city to delete: " << endl;
cin >> first1;
getline(cin, rest1);
delCity = first1 + rest1;

   CN1.deleteCity(delCity);



                                //////////////////// Back to main menu
    cout << "======Main Menu======" << endl;
    cout<<"1. Build Main Network"<<endl;
    cout<<"2. Build Extra Network From File"<<endl;
    cout<<"3. Print Network Path"<<endl;
    cout<<"4. Transmit Message Coast-To-Coast-To-Coast"<<endl;
    cout<<"5. Merge Networks"<<endl;
    cout<<"6. Find Distance Between Cities"<<endl;
    cout<<"7. Find Total Network Length"<<endl;
    cout<<"8. Add City"<<endl;
    cout<<"9. Delete City"<<endl;
    cout<<"10. Clear Network"<<endl;
    cout<<"11. Quit"<<endl;
    cin>>choice;
    }
     else if(choice==10){           //Clear Network
    CN1.clearNetwork();


    //////////////////// Back to main menu
    cout << "======Main Menu======" << endl;
    cout<<"1. Build Main Network"<<endl;
    cout<<"2. Build Extra Network From File"<<endl;
    cout<<"3. Print Network Path"<<endl;
    cout<<"4. Transmit Message Coast-To-Coast-To-Coast"<<endl;
    cout<<"5. Merge Networks"<<endl;
    cout<<"6. Find Distance Between Cities"<<endl;
    cout<<"7. Find Total Network Length"<<endl;
    cout<<"8. Add City"<<endl;
    cout<<"9. Delete City"<<endl;
    cout<<"10. Clear Network"<<endl;
    cout<<"11. Quit"<<endl;
    cin>>choice;
    }
    else if(choice>11 || choice < 1){   //Not a valid input
        cout<<endl<<"Not a valid input. Please enter a value between 1 and 11"<<endl<<endl;

        //////////////////// Back to main menu
    cout << "======Main Menu======" << endl;
    cout<<"1. Build Main Network"<<endl;
    cout<<"2. Build Extra Network From File"<<endl;
    cout<<"3. Print Network Path"<<endl;
    cout<<"4. Transmit Message Coast-To-Coast-To-Coast"<<endl;
    cout<<"5. Merge Networks"<<endl;
    cout<<"6. Find Distance Between Cities"<<endl;
    cout<<"7. Find Total Network Length"<<endl;
    cout<<"8. Add City"<<endl;
    cout<<"9. Delete City"<<endl;
    cout<<"10. Clear Network"<<endl;
    cout<<"11. Quit"<<endl;
    cin>>choice;

    }
    }  //End of while(choice!=11)
    cout<<"Goodbye!"<<endl;
    return 0;

}

