#ifndef COMMUNICATIONNETWORK_H
#define COMMUNICATIONNETWORK_H
#include <iostream>

struct City{
    std::string cityName;
    std::string message;
    int dist;                               //Distance from previous city
    City *next;
    City *previous;

    City(){}; // default constructor

    City(std::string initName, City *initNext, std::string initMessage)
    {
        cityName = initName;
        next = initNext;
        message = initMessage;
    }

};

class CommunicationNetwork
{
    public:
        CommunicationNetwork();
        ~CommunicationNetwork();
        void addCity(std::string, std::string, int);     //add if(not found) case
        void buildNetwork();
        void transmitMsg(char *word);
        void printNetwork();
        void deleteCity(std::string);           //add if(not found) case
        void clearNetwork();        //FIX
        void newNetwork(std::string);
       // void mergeNetworks(std::string);
        void findDistance(std::string, std::string);
        void findTotalLength();
    protected:
    private:
        City *head;
        City *tail;
};

#endif // COMMUNICATIONNETWORK_H



