#include "trip.h"
#include <iostream>
using namespace std;

Trip::Trip():
    m_sourceCity{""}, m_destinationCity{""} {}
Trip::Trip(string scity, string dcity):
    m_sourceCity{scity}, m_destinationCity{dcity} {}
string Trip::getDestination() {
    return m_destinationCity;
}
string Trip::getOrigin() {
    return m_sourceCity;
}

