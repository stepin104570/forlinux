#ifndef __TRIP_H
#define __TRIP_H
#include <iostream>
using namespace std;

class Trip {
    string m_sourceCity;
    string m_destinationCity;
  public:
    Trip();
    Trip(string, string);
    virtual double computeFare()=0;
    virtual double computeTravelTime()=0;
    string getDestination();
    string getOrigin();
};

#endif
