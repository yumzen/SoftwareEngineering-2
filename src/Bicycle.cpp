#include "Bicycle.h"

/**
 * @brief Bicycle 클래스 생성자
 * @param id 
 * @param productName 
 */
Bicycle::Bicycle(string id, string productName) : id(id), bicycleStatus(false), productName(productName){}


/**
 * @brief 자전거 상태를 설정하는 함수
 * @param status 자전거 상태 (true: 사용 가능, false: 사용 불가)
 */
void Bicycle::setBicycleStatus(bool status) {
    bicycleStatus = status;
}

/**
 * @brief 자전거 상태를 반환하는 함수
 * @return 자전거 상태 (true: 사용 가능, false: 사용 불가)
 */
bool Bicycle::getBicycleStatus() {
    return bicycleStatus;
}

/**
 * @brief 자전거의 상세 정보를 반환하는 함수
 * @return 자전거 ID와 제품 이름을 포함한 문자열
 */
string Bicycle::getBicycleDetails() const {
    return id + " " + productName;
}