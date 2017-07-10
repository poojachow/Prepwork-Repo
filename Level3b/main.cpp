//
//  main.cpp
//  Level3b
//
//  Created by Pooja Chowdhary on 7/2/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int numRange(vector<int> &A, int B, int C) {
    int count = 0;
    int sum = 0;
    vector<int>::iterator it;
    vector<int>::iterator temp;
    for (it = A.begin(); it != A.end(); it++) {
        sum = 0;
        temp = it;
        if (*temp > C) {
            continue;
        }
        while (temp != A.end()) {
            sum = sum + *temp;
            if (sum > C) {
                break;
            }
            if (sum >= B && sum <= C) {
                count++;
            }
            temp++;
        }
    }
    return count;
}

int main(int argc, const char * argv[]) {
    vector<int> A = {10, 5, 1, 0, 2};
    cout << numRange(A, 6, 8);
    return 0;
}
