#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <tuple>

#include "User.h"
#include "UserSession.h"
#include "SignupUI.h"
#include "SigninUI.h"
#include "SignoutUI.h"
#include "RegisterBicycleUI.h"
#include "RentalBicycleUI.h"
#include "GetRentalInfoUI.h"

using namespace std;

// 상수
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 전역 입출력 스트림
ifstream inputFile(INPUT_FILE_NAME);
ofstream outputFile(OUTPUT_FILE_NAME);

// 전역 세션 객체
UserSession userSession;

// 함수 선언
void runProgram();
void exitProgram();

int main() {
    runProgram();
    inputFile.close();
    outputFile.close();
    return 0;
}

void runProgram() {

    // 출력 확인 테스트
    outputFile << "프로그램 시작" << endl;
    cout << "프로그램 시작" << endl;
    int mainMenu = 0, subMenu = 0;
    bool isRunning = true;

    string line, input;

    while (isRunning && getline(inputFile, line)) {
        if (line.length() >= 3) {
            mainMenu = line[0] - '0';
            subMenu = line[2] - '0';
           if (line.length() > 4) input = line.substr(4, line.length()); // 입력 인자 추출

            switch (mainMenu) {
                case 1:
                    if (subMenu == 1) {
                        SignupUI signupUI;
                        signupUI.signupWithUserInfo(input);
                    }
                    break;

/*
                case 2:
                    if (subMenu == 1) { 
                        SigninUI signinUI;
                    } else if (subMenu == 2) {
                        SignoutUI signoutUI;
                    }
                    break;

                case 3:
                    if (subMenu == 1 && userSession.getCurrentUser() != nullptr) {
                        RegisterBicycleUI registerBicycleUI;
                    }
                    break;

                case 4:
                    if (subMenu == 1 && userSession.getCurrentUser() != nullptr) { 
                        RentalBicycleUI rentalBicycleUI;
                    }
                    break;

                case 5:
                    if (subMenu == 1 && userSession.getCurrentUser() != nullptr) {
                        GetRentalInfoUI getRentalInfoUI;
                    }
                    break;

                case 6:
                    if (subMenu == 1) {
                        exitProgram();
                        isRunning = false;
                    }
                    break;
                      */
                }
        }
    }
}

void exitProgram() {
    outputFile << "6.1. 종료" << endl;
    cout << "프로그램을 종료합니다." << endl;
}