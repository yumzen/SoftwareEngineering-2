#include "Bicycle.h"

Bicycle::Bicycle(string id, string productName) : id(id), bicycleStatus(false), productName(productName){}

void Bicycle::setBicycleStatus(bool status) {
    bicycleStatus = status;
}

string Bicycle::getBicycleDetails() const {
    return "ID: " + id ;
}