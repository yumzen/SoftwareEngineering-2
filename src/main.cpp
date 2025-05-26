/**
 * @file main.cpp
 * @brief 공유 자전거 대여 시스템의 메인 프로그램
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

/**
 * @brief 프로그램 실행 함수
 * 
 * @param inputFile 입력 파일 스트림
 */
void runProgram(ifstream& inputFile);

/**
 * @brief 프로그램 종료 함수
 */
void exitProgram();

/**
 * @brief main 함수: 프로그램 진입점
 */
int main() {
    const string inputFileName = "input.txt";
    ifstream inputFile(inputFileName);

    if (!inputFile.is_open()) {
        cerr << "입력 파일을 열 수 없습니다: " << inputFileName << endl;
        return 1;
    }

    runProgram(inputFile);
    inputFile.close();
    return 0;
}

void runProgram(ifstream& inputFile) {
    int mainMenu = 0, subMenu = 0;
    bool isRunning = true;
    string line, input;

    while (isRunning && getline(inputFile, line)) {
        if (line.length() >= 3) {
            mainMenu = line[0] - '0';
            subMenu = line[2] - '0';
            if (line.length() > 4) input = line.substr(4);

            switch (mainMenu) {
                case 1: // 회원가입
                    if (subMenu == 1) {
                        SignupUI signupUI;
                        signupUI.startInterface();
                        signupUI.signupWithUserInfo(input);
                        writeFile("\n");
                    }
                    break;

                case 2: // 로그인 / 로그아웃
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

                case 3: // 자전거 등록
                    if (subMenu == 1) {
                        RegisterBicycleUI registerBicycleUI;
                        registerBicycleUI.startInterface();
                        registerBicycleUI.registerWithBicycleInfo(input);
                        writeFile("\n");
                    }
                    break;

                case 4: // 자전거 대여
                    if (subMenu == 1) {
                        RentalBicycleUI rentalBicycleUI;
                        rentalBicycleUI.startInterface();
                        rentalBicycleUI.rentalBicycleWithId(input);
                        writeFile("\n");
                    }
                    break;

                case 5: // 대여 정보 조회
                    if (subMenu == 1) {
                        GetRentalInfoUI getRentalInfoUI;
                        getRentalInfoUI.startInterface();
                        writeFile("\n");
                    }
                    break;

                case 6: // 종료
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