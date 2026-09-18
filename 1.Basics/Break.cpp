//
// Created by Rookr on 18/09/26.
//
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {

        // Terminating before reaching i = 4
        if (i == 2) break;
        cout << "Hi" << endl;
    }
    return 0;
}