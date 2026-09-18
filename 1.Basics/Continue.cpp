//
// Created by Rookr on 18/09/26.
//
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {

        // Skipping when i equals 2
        if (i == 2) continue;
        cout << "Hi" << endl;
    }
    return 0;
}