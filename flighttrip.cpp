#include "flighttrip.h"
#include<iostream>
using namespace std;

FlightTrip::FlightTrip():
    m_flightNumber{""}, m_operator{""}, m_distance{0.0} {}

FlightTrip::FlightTrip(string scity, string dcity, string number, string oper, double distance):
    Trip(scity, dcity), m_flightNumber{number}, m_operator{oper}, m_distance{distance} {}

double FlightTrip::computeFare() {
    double fare = Inr * m_distance;
    return fare;
}
double FlightTrip::computeTravelTime() {
    double time = (1 * m_distance)/speed;
    time = 60*time;
    return time;
}
string FlightTrip::getFlightNumber() {
    return m_flightNumber;
}
string FlightTrip::getOperator() {
    return m_operator;
}
double FlightTrip::getDistance() {
    return m_distance;
}


