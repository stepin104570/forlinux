#ifndef FLIGHTTRIP_H
#define FLIGHTTRIP_H
#include "trip.h"
using namespace std;
const double speed = 500.0;
const double Inr = 10.0;

class FlightTrip: public Trip {
    string m_flightNumber;
    string m_operator;
    double m_distance;
  public:
    FlightTrip();
    FlightTrip(string, string, string, string, double);
    double computeFare() override;
    double computeTravelTime() override;
    string getFlightNumber();
    string getOperator();
    double getDistance();
};

#endif // FLIGHTTRIP_H
