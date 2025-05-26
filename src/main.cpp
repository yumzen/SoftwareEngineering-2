/**
 * @file main.cpp
 * @brief 공유 자전거 대여 시스템의 메인 프로그램
 * 
 * 입력 파일을 기반으로 사용자의 명령을 처리하고,
 * 회원가입, 로그인, 로그아웃, 자전거 등록, 대여, 대여 정보 조회 등의 기능을 수행합니다.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <tuple>

#include "User.h"
#include "UserSession.h"
#include "SignupUI.h"
#include "SigninUI.h"
#include "Signout.h"
#include "SignoutUI.h"
#include "RegisterBicycle.h"
#include "RegisterBicycleUI.h"
#include "RentalBicycle.h"
#include "RentalBicycleUI.h"
#include "GetRentalInfo.h"
#include "GetRentalInfoUI.h"
#include "UserCollection.h"
#include "BicycleCollection.h"
#include "WriteFile.h"

using namespace std;

/// @brief 입력 파일 이름 정의
#define INPUT_FILE_NAME "input.txt"
ifstream inputFile(INPUT_FILE_NAME);

/**
 * @brief 프로그램 실행 함수
 * 
 * 입력 파일의 명령을 읽어 기능을 수행합니다.
 */
void runProgram();

/**
 * @brief 프로그램 종료 함수
 * 
 * 종료 메시지를 출력 파일에 기록합니다.
 */
void exitProgram();


/**
 * @brief 프로그램 시작점
 * 
 * @return int 실행 결과 코드
 */
int main() {
    runProgram();
    inputFile.close();
    return 0;
}

void runProgram() {
    /// @brief 메인 메뉴와 서브 메뉴 변수
    int mainMenu = 0, subMenu = 0;

    /// @brief 프로그램 실행 여부를 나타내는 변수
    bool isRunning = true;

    /// @brief 입력 파일에서 한 줄씩 읽어 처리하기 위한 변수
    string line, input;


    /// @brief 입력 파일에서 명령을 읽어 프로그램 실행
    while (isRunning && getline(inputFile, line)) {
        if (line.length() >= 3) {
            mainMenu = line[0] - '0';
            subMenu = line[2] - '0';
           if (line.length() > 4) input = line.substr(4, line.length());

            switch (mainMenu) {
                // 1.1 회원가입
                case 1:
                    if (subMenu == 1) {
                        SignupUI signupUI;
                        signupUI.startInterface();
                        signupUI.signupWithUserInfo(input);
                        writeFile("\n");
                    }
                    break;
                // 1.1 로그인 및 1.2 로그아웃
                case 2:
                    if (subMenu == 1) { 
                        SigninUI signinUI;
                        signinUI.startInterface();
                        signinUI.signinWithUserInfo(input);
                        writeFile("\n");

                    } else if (subMenu == 2) {
                        SignoutUI signoutUI;
                        signoutUI.startInterface();
                        signoutUI.signoutUI();
                        writeFile("\n");
                    }
                    break;

                // 3.1 자전거 등록
                case 3:
                    if (subMenu == 1 ) {
                        RegisterBicycleUI registerBicycleUI;
                        registerBicycleUI.startInterface();
                        registerBicycleUI.registerBicycleUI(input);
                        writeFile("\n");
                    }
                    break;

                // 4.1 자전거 대여
                case 4:
                    if (subMenu == 1) { 
                        RentalBicycleUI rentalBicycleUI;
                        rentalBicycleUI.startInterface();
                        rentalBicycleUI.rentalBicycleUI(input);
                        writeFile("\n");
                
                    }
                    break;

                // 5.1 대여 정보 조회
                case 5:
                    if (subMenu == 1) {
                        GetRentalInfoUI getRentalInfoUI;
                        getRentalInfoUI.startInterface();
                        writeFile("\n");
                    }
                    break;

                // 6.1 프로그램 종료
                case 6:
                    if (subMenu == 1) {
                        exitProgram();
                        isRunning = false;
                    }
                    break;
                      
                }
        }
    }
}

void exitProgram() {
    writeFile("6.1. 종료");
}