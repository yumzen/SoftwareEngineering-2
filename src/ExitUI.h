#pragma once
#include <iostream>
#include <string>
#include "Exit.h"
#include "WriteFile.h"

/**
 * @brief ExitUI 클래스
 * 이 클래스는 프로그램 종료 인터페이스를 제공
 */
class ExitUI {
private:
    Exit exit; /// Exit 객체를 사용하여 프로그램 종료 기능을 관리
public:
    ExitUI(); /// 생성자
    void exitProgram(); /// 프로그램을 종료하는 함수
};