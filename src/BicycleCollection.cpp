#include "BicycleCollection.h"

/**
 * @brief 자전거 컬렉션 클래스
 */
BicycleCollection::BicycleCollection() {}


/**
 * @brief 자전거 컬렉션의 싱글턴 인스턴스를 반환하는 함수
 * @return 자전거 컬렉션의 인스턴스
*/
BicycleCollection& BicycleCollection::getInstance() {
    static BicycleCollection instance;
    return instance;
}

/**
 * @brief  새로운 자전거를 컬렉션에 추가하는 함수
 * @param bicycle 
 */
void BicycleCollection::addNewBicycle(Bicycle* bicycle) {
    bicycleList.push_back(bicycle);
}

/**
 * @brief 자전거 ID로 자전거를 찾는 함수
 * @param id 자전거 ID
 * @return 해당 ID의 자전거 포인터, 없으면 nullptr
 */
Bicycle* BicycleCollection::findBicycleById(const string& id) {
    for (Bicycle* bicycle : bicycleList) {
        if (bicycle->getBicycleDetails().find(id) != string::npos) {
            return bicycle;
        }
    }
    return nullptr;
}