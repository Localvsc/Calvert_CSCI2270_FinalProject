#include "CommunicationNetwork.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <string>

CommunicationNetwork::CommunicationNetwork()
{
    //ctor
}

CommunicationNetwork::~CommunicationNetwork()
{
    //dtor
    //std::cout<<"deleting "<<head<<std::endl; //Doesn't do anything here
}

void CommunicationNetwork::buildNetwork(){      //UPDATED

 City *n;
 City *temp;
 //City *prev;
 //City *head;

n = new City;
n->cityName = "Los Angeles";         //Doesn't work with a space in between Los and Angeles.
n->dist = 0;
n->message = "";
n->previous=NULL;
head = n;                           //Points head at n
temp = n;                           //Points temp at n



n = new City;                           //Create new City n
n->cityName = "Phoenix";                //Add data
n->dist = 372;
n->message = "";                         //Add data
temp->next = n;                         //point the "next" section of temp to the current n.
n->previous=temp;
temp = n;  //or temp = temp->next;      //point temp to current n \

n = new City;
n->cityName = "Denver";
n->dist = 865;
n->message = "";
temp->next = n;
n->previous = temp;
temp = n;

n = new City;
n->cityName = "Dallas";
n->dist = 794;
n->message = "";
temp->next = n;
n->previous = temp;
temp = n;

n = new City;
n->cityName = "St. Louis";
n->dist = 631;
n->message = "";
temp->next = n;
n->previous = temp;                 //
temp = n;

n = new City;
n->cityName = "Chicago";
n->dist = 297;
n->message = "";
temp->next = n;
n->previous = temp;
temp = n;

n = new City;
n->cityName = "Atlanta";
n->dist = 717;
n->message = "";
temp->next = n;
n->previous = temp;
temp = n;

n = new City;
n->cityName = "Washington, D.C.";
n->dist = 639;
n->message = "";
temp->next = n;
n->previous = temp;
temp = n;

n = new City;
n->cityName = "New York";           //
n->dist = 225;
n->message = "";
temp->next = n;
n->previous = temp;
temp = n;

n = new City;
n->cityName = "Boston";
n->dist = 216;
n->message = "";

n->next = NULL;
n->previous = temp;
temp->next = n;                     //Added
temp = n;

tail = n;               // Point tail to the last city in the network;



}




void CommunicationNetwork::printNetwork(){              //UPDATED


City *temp = head;
std::cout<< "===CURRENT PATH==="<<std::endl;
std::cout<<"NULL <- ";

while(temp->next!= NULL){

    std::cout<<temp->cityName<<" <-> ";
    temp = temp->next;

}
//std::cout<<temp->cityName<<" <-> ";
std::cout<<tail->cityName<<" -> NULL "<<std::endl;
std::cout<<	"=================="	<<std::endl;




}

void CommunicationNetwork::transmitMsg(char *filename){             //Updated

City *temp = head;
City *temp2 = head;
//char *file = filename;
std::string data;
std::string tmp;
std::ifstream wordFile;

wordFile.open(filename);

    if(wordFile.good()){
   //std::cout<<"file opened"<<std::endl;

        while(getline(wordFile,data,' ')){             //Reading the file line by line
               // std::cout<<data<<std::endl;

            temp->message = data;

            while(temp->next !=NULL){
            temp2 = temp->next;

            std::cout<<temp->cityName<<" received "<< temp->message<<std::endl;
            temp2->message = temp->message;
            //delete []temp;
            temp = temp2;

                }
                std::cout<<temp->cityName<<" received "<< temp->message<<std::endl;
                tail->message = temp->message;
                std::cout<<tail->cityName<<" received "<< tail->message<<std::endl;
            //temp = tail;
            //temp->message=temp2->message;
            while(temp->previous!=NULL){
                    temp2 = temp->previous;
                    std::cout<<temp->cityName<<" received "<< temp->message<<std::endl;
                temp2->message = temp->message;
                temp = temp2;
            }
                std::cout<<temp->cityName<<" received "<< temp->message<<std::endl;
                head->message = temp->message;
               // std::cout<<head->cityName<<" received "<< head->message<<std::endl;


        }
    }
    else{
        std::cout<<"File not opened"<<std::endl;
    }

}



void CommunicationNetwork::addCity(std::string previousCity, std::string newCity, int d){             //Updated
//City *tail = tail;
City *temp = head;
City *returnCity = NULL;
bool found = false;


if(previousCity==tail->cityName){
    //temp = tail;
    City *n = new City;
    n->next=NULL;
    n->message="";
    n->cityName = newCity;
    n->previous=tail;
    tail->next=n;
    tail=tail->next;  //or tail = n?

}
else if(previousCity=="First"){
    City *n = new City;
    n->previous=NULL;
    n->message="";
    n->cityName = newCity;
    n->next=head;
    head->previous=n;
    head=head->previous;

}
else if(previousCity==head->cityName){
    City *n = new City;
    n->previous=head;
    n->message="";
    n->cityName = newCity;
    n->next=head->next;
    head->next = n;
}
else if(previousCity!=head->cityName && previousCity!=tail->cityName){
    while(!found && temp!=NULL){
    if(temp->cityName == previousCity){
        found = true;
    }
    else{
        temp = temp->next;
    }
}

City *n = new City;
n->cityName = newCity;
n->message = "";
n->dist = d;
temp->next->previous = n;
n->next = temp->next;
n->previous = temp;
temp->next = n;
}
}

/*
if(previousCity!= "First"){
while(!found && temp!=NULL){
    if(temp->cityName == previousCity){
        found = true;
        returnCity = temp;
    }
    else{
        temp = temp->next;
    }
}

if(returnCity == tail){         //Tail of the list                  ADDING TO TAIL NOT WORKING
       std::cout<<" In the tail if statement"<<std::endl;
City *n = new City;
n->cityName = newCity;
n->message = "";
n->next=NULL;
returnCity->next = n;
n->previous = returnCity;
tail = n;
}

else{                       //Middle of the list
City *n = new City;
n->cityName = newCity;
n->message = "";
returnCity->next->previous = n;
n->next = returnCity->next;
n->previous = returnCity;
returnCity->next = n;
}
}
else{                           //Head of the list
City *n = new City;
n->cityName = newCity;
n->message = "";
n->next=head;
n->previous=NULL;
head = n;
}

}
*/

void CommunicationNetwork::deleteCity(std::string delCity){
City *temp = head;
//City *returnCity = NULL;

if(delCity == tail->cityName){
   // std::cout<<"It's the tail"<<std::endl;
        temp = tail;
        tail = tail->previous;
        tail->next=NULL;
        delete temp;

}
else if(delCity == head->cityName){
    temp = head;
    head = head->next;
    head->previous=NULL;
    delete temp;
}


else if(delCity!=head->cityName && delCity!=tail->cityName){
bool found = false;
temp = head;
while(!found && temp!=NULL){
    if(temp->cityName==delCity){
       found = true;
       //returnCity=temp;
    }
    else{
        temp = temp->next;
    }
}



City *node = temp;
       node->previous->next = node->next;
        node->next->previous = node->previous;
        delete node; //don't need [] here because it isn't an array.
}



}

void CommunicationNetwork::clearNetwork(){
//City *temp = head;
/*City *temp = head->next;
while(head!=NULL){
    std::cout<<"deleting "<<head->cityName<<std::endl;
    delete head;
    head = temp;
    temp = temp->next;

}
*/
City *temp = head;
City *temp2 = head->next;

while(temp->next!=NULL){
    std::cout<<"deleting "<<temp->cityName<<std::endl;
    delete temp;
    temp = temp2;
    temp2 = temp2->next;

}
std::cout<<"deleting "<<temp2->cityName<<std::endl;
delete temp2;
//delete temp;



}

void CommunicationNetwork::newNetwork(std::string networkFile){

    //std::cout<<"Building a new network"<<std::endl;
std::ifstream cityFile;
std::string wordstring;
std::string data;
std::string data2;

const char* x = networkFile.c_str();

////////////////////////
cityFile.open(x);

if(cityFile.good()){


City *n;
City *temp;
int loopCtr=0;
int cityCtr=0;
 while(getline(cityFile,data)){
        cityCtr++;
        std::stringstream ss(data);

        while(getline(ss,data2,',')){

                n = new City;
                n->message = "";


            if(loopCtr==0){

                    if(cityCtr==1){ //If it is the head city

                    n->cityName = data2;
                    n->previous=NULL;
                    head = n;                           //Points head at n
                    temp = n;
                    }
                    else{       //City isn't the head

                    n->cityName = data2;                //Add data
                    temp->next = n;                         //point the "next" section of temp to the current n.
                    n->previous=temp;
                    temp = n;

                    }
                n->next=NULL;
                tail = n;
                loopCtr++;
            }
            else{
                int data3 = atoi(data2.c_str());
                 n->dist = data3;       //Need to convert string to int

                loopCtr=0;
            }

        //n->next=NULL;
        //tail = n;
        } //End inf inner getline loop
} //End of outer getline loop
}
else{
    std::cout<<"File not found"<<std::endl;
}




}




void CommunicationNetwork::findTotalLength(){
int totalLength=0;

City *temp=head;
while(temp!=NULL){
    totalLength = totalLength + temp->dist;
    temp = temp->next;
}

std::cout<<"The total length of the main network is: "<<totalLength<<std::endl;

}


void CommunicationNetwork::findDistance(std::string startCity, std::string endCity){

int distance  = 0;
City *temp = head;

std::cout<<"In the findDistance function"<<std::endl;

while(temp->cityName!=startCity){
        //std::cout<<"Finding the first City"<<std::endl;
        //std::cout<<temp->cityName<<std::endl;
    temp=temp->next;
    if(temp==NULL){
        std::cout<<"City not found"<<std::endl;
        break;
    }
}
std::cout<<temp->cityName<<std::endl;
//Now temp = either startCity or end City
temp = temp->next;
if(temp->cityName==endCity){
    distance = temp->dist;
}
else{
while(temp->cityName!=endCity){
    distance = distance + temp->dist;
    if(temp==NULL){
        std::cout<<"Either the ending city doesn't exist, or it is before the starting city in the network"<<std::endl;
        break;
    }
    temp = temp->next;
}
distance = distance + temp->dist;
}

if(temp!=NULL){
    std::cout<<"Distance between cities: "<<distance<<std::endl;
}

}

