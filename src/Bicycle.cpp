#include "Bicycle.h"

Bicycle::Bicycle(string id, string type) : id(id), type(type), bicycleStatus(false) {}

void Bicycle::setBicycleStatus(bool status) {
    bicycleStatus = status;
}

string Bicycle::getBicycleDetails() const {
    return "ID: " + id + ", Type: " + type + ", Status: " + (bicycleStatus ? "Available" : "Unavailable");
}