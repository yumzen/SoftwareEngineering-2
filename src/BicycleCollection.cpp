#include "BicycleCollection.h"

BicycleCollection::BicycleCollection() {}

BicycleCollection& BicycleCollection::getInstance() {
    static BicycleCollection instance;
    return instance;
}

void BicycleCollection::addNewBicycle(Bicycle* bicycle) {
    bicycleList.push_back(bicycle);
}
Bicycle* BicycleCollection::findBicycleById(const string& id) {
    for (Bicycle* bicycle : bicycleList) {
        if (bicycle->getBicycleDetails().find(id) != string::npos) {
            return bicycle;
        }
    }
    return nullptr;
}