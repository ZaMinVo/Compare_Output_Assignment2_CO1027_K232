/*
* Ho Chi Minh City University of Technology
* Faculty of Computer Science and Engineering
* Initial code for Assignment 1
* Programming Fundamentals Spring 2023
* Author: Vu Van Tien
* Date: 01.03.2023
*/

//The library here is concretely set, students are not allowed to include any other libraries.

#include "tc_bkel.h"
#include <fstream>

using namespace std;

string FILENAME = "tc_1000";

int main(int argc, const char * argv[]) {
    for(int i = 0; i < 361; ++i){//362->381 config (i+1)
        if(!(i > 180 && i < 198) || i == 184) {
            ofstream output("./_output/" + FILENAME.substr(0, FILENAME.size() - to_string(i + 1).size()) + to_string(i + 1) + ".out");
            cout.rdbuf(output.rdbuf());
            TestStudyInPink::test(i);
            output.close();
        }
    }
    return 0;
}
