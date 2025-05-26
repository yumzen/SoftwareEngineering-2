#include "RegisterBicycleUI.h"
#include "RegisterBicycle.h"
#include <sstream>
#include <fstream>
#include "WriteFile.h"

/**
 * @brief RegisterBicycleUI 클래스 생성자
 * 이 클래스는 RegisterBicycle 객체를 초기화
 */
RegisterBicycleUI::RegisterBicycleUI() : registerBicycle() {}

/**
 * @brief 자전거 등록 인터페이스를 시작하는 함수
 * 사용자에게 자전거 등록을 안내하는 메시지를 출력
 */
void RegisterBicycleUI::startInterface() {
    writeFile("3.1. 자전거 등록\n");
}

/**
 * @brief 자전거 정보를 입력받아 등록하는 함수
 * @param input 사용자로부터 입력받은 자전거 ID와 제조사 정보
 */
void RegisterBicycleUI::registerWithBicycleInfo(const string& input) {
    istringstream iss(input);
    string id, manufacturer;
    iss >> id >> manufacturer;

    string result = registerBicycle.registerBicycle(id, manufacturer);

    writeFile("> " + result);
}