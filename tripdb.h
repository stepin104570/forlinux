#ifndef TRIPDB_H
#define TRIPDB_H
#include<list>
#include<iterator>
//#include<flighttrip.h>
//#include<trip.h>

class FlightTripDb {
    std::list<FlightTrip> trips;

  public:
    void addTrip(string, string, string, string, double);
    void removeTrip(string);
    FlightTrip* findTripById(string);
    int countAll();
    double computeMaxFare();
    double computeMinTravelTime();
    int countTripsByOperator(string);
};


#endif // TRIPDB_H
