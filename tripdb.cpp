#include<iostream>
#include "trip.h"
#include "flighttrip.h"
#include "tripdb.h"

#include <list>
#include <iterator>
using namespace std;

void FlightTripDb::addTrip(string scity, string dcity, string number, string oper, double distance) {
    trips.push_back(FlightTrip(scity, dcity, number, oper, distance));
}
void FlightTripDb::removeTrip(string id) {
    std::list<FlightTrip> :: iterator iter;
    for(iter=trips.begin(); iter!=trips.end(); iter++) {
        if (iter->getFlightNumber() == id) {
            trips.erase(iter);
            break;
        }
    }
}
FlightTrip* FlightTripDb::findTripById(string id) {
    std::list<FlightTrip> :: iterator iter;
    for(iter=trips.begin(); iter!=trips.end(); iter++) {
        if (id == iter->getFlightNumber()) {
            return &(*iter);
        }
    }
    return NULL;
}
int FlightTripDb::countAll() {
    return trips.size();
}
double FlightTripDb::computeMaxFare() {     //some confusion
    std::list<FlightTrip> :: iterator iter = trips.begin();
    double maxFare = iter->computeFare();
    iter++;
    for(; iter!= trips.end(); ++iter) {
        if(maxFare < iter->computeFare()) {
            maxFare = iter->computeFare();
        }
    }
    return (maxFare);
}
double FlightTripDb::computeMinTravelTime() {
    std::list<FlightTrip> :: iterator iter = trips.begin();
    double minTime = iter->computeTravelTime();
    iter++;
    for(; iter!= trips.end(); ++iter) {
        if(minTime > iter->computeTravelTime()) {
            minTime = iter->computeTravelTime();
        }
    }
    return (minTime);
}
int FlightTripDb::countTripsByOperator(string oper) {
    int count=0;
    std::list<FlightTrip> ::iterator iter;
    for(iter=trips.begin(); iter!=trips.end(); iter++) {
        if (iter->getOperator() == oper)
            count++;
    }
    return count;
}


