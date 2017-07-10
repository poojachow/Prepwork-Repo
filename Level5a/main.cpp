//
//  main.cpp
//  Level5a
//
//  Created by Pooja Chowdhary on 7/3/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

bool swapRequired (int start, int i, const vector<int> A) {
    for (int j = start; j < i; j++) {
        if (A[j] == A[i]) {
            return true;
        }
    }
    return false;
}

void swapnum (int &i, int &j) {
    int temp = i;
    i = j;
    j = temp;
}

void permuteRecursion(vector<int>A, int start, int end, vector<vector<int>> &B) {
    if (start == end) {
        B.push_back(A);
    }
    else {
        for (int i = start; i <= end; i++) {
            if (swapRequired(start, i, A)) {
                continue;
            }

            swapnum(A[start], A[i]);
            permuteRecursion(A, start+1, end, B);
            swapnum(A[start], A[i]);
        }
    }
}

vector<vector<int>> permute(vector<int> &A) {
    vector<vector<int>>B;
    permuteRecursion(A, 0, (A.size()-1), B);
    
    return B;
}


int main(int argc, const char * argv[]) {
    vector<int>A  = {1, 2, 3};
    vector<vector<int>> C = permute(A);
    return 0;
}
