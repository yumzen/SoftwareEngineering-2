#include "Bicycle.h"

Bicycle::Bicycle(string id, string productName) : id(id), bicycleStatus(false), productName(productName){}

void Bicycle::setBicycleStatus(bool status) {
    bicycleStatus = status;
}

bool Bicycle::getBicycleStatus() {
    return bicycleStatus;
}

string Bicycle::getBicycleDetails() const {
    return id + " " + productName;
}