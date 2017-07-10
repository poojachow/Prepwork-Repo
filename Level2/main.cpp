//
//  main.cpp
//  Level2
//
//  Created by Pooja Chowdhary on 7/2/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> prettyPrint(int A) {
    vector<vector<int>> matrix;
    int value = A;
    int max = (2*A) - 1;
    bool flag = false;
    int half = max/2;
    
    for (int i = 0; i < max; i++) {
        vector<int> temp;
        int count = 0;
        value = A;
        flag = false;
        for (int j = 0; j < max; j++) {
            temp.push_back(value);
            if (half < i) {
                if (count > 0) {
                    if (i == j) {
                        flag = true;
                    }
                    if (flag == true) {
                        value++;
                    }
                }
                if (i+j < max-1) {
                    value--;
                    count++;
                }
            }
            else {
                if (count > 0) {
                    if (max-1-j == count) {
                        flag = true;
                    }
                    if (flag == true) {
                        value++;
                    }
                }
                if (j < i) {
                    value--;
                    count++;
                }
            }
        }
        matrix.push_back(temp);
    }
    return matrix;
}


int main(int argc, const char * argv[]) {
    vector<vector<int>> solution = prettyPrint(7);
    return 0;
}
