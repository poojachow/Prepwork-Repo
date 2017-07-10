//
//  main.cpp
//  Level4b
//
//  Created by Pooja Chowdhary on 7/2/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> nextGreater(vector<int> &A) {
    vector<int>::iterator it;
    vector<int>::iterator temp;
    for (it = A.begin(); it != A.end(); it++) {
        temp = it;
        bool flag = false;
        while(temp != A.end()) {
            if (*temp > *it) {
                *it = *temp;
                flag = true;
                break;
            }
            temp++;
        }
        if (flag == false) {
            *it = -1;
        }
    }
    return A;
}

int main(int argc, const char * argv[]) {
    vector<int> A = {3, 2, 1};
    vector<int> B = nextGreater(A);
    return 0;
}
