#include <fstream>
using namespace std;

void writeFile(const string& line) {
    ofstream outFile("output.txt", ios::app);
    outFile << line;
    outFile.close();
}