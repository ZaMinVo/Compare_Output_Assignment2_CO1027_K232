#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

bool compareFiles(const std::string& file1, const std::string& file2) {
    string command = "fc " + file1 + " " + file2 + " > nul";
    int result = system(command.c_str());
    
    return !result;
}

string FILENAME = "tc_1000";

int main() {
    ofstream output("notmatch.txt");
    size_t match = 0;
    for(int i = 0; i < 361; ++i){//362->381 config (i+1)
        if(!(i > 180 && i < 198) || i == 184) { 
            string file1 = "output\\" + FILENAME.substr(0, FILENAME.size() - to_string(i + 1).size()) + to_string(i + 1) + ".out";
            string file2 = "_output\\" + FILENAME.substr(0, FILENAME.size() - to_string(i + 1).size()) + to_string(i + 1) + ".out";
            if (compareFiles(file1, file2)) {
                cout << "Match " << "Testcase" << i + 1 << endl;
                ++match;
            } else {
                output << "Not match " << "Testcase" << i + 1 << endl;
            }
        }
    }
    cout << "Match " << 1.f * match / 345 * 100 << "%";
    return 0;
}
