#include "WriteFile.h"
using namespace std;

void writeFile(const string& line) {
    ofstream outFile("output.txt", ios::app);
    outFile << line;
    outFile.close();
}

/* 윈도우
void writeFile(const std::string& line) {
    ofstream outFile("output.txt", std::ios::app | std::ios::binary);
    outFile << line;
    outFile.close();
}
*/