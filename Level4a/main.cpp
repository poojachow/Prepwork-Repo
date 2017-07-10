//
//  main.cpp
//  Level4a
//
//  Created by Pooja Chowdhary on 7/2/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

 // Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* subtract(ListNode* A) {
    vector<int> arr;
    ListNode *temp = A;
    while (temp) {
        arr.push_back(temp->val);
        temp = temp->next;
    }
    int pos = arr.size()-1;
    int half = 0;
    if (arr.size()%2 == 0) {
        half = (arr.size()/2) - 1;
    }
    else {
        half = (arr.size()/2);
    }
    
    temp = A;
    while (temp) {
        if (pos <= half) {
            break;
        }
        temp->val = arr.at(pos) - temp->val;
        pos--;
        
        temp = temp->next;
    }
    return A;
}


int main(int argc, const char * argv[]) {
    ListNode* head = nullptr;
    ListNode a = ListNode(1);
    head = &a;
    ListNode b = ListNode(2);
    a.next = &b;
    ListNode c = ListNode(3);
    b.next = &c;
    ListNode d = ListNode(4);
    c.next = &d;
    ListNode e = ListNode(5);
    d.next = &e;
//    ListNode f = ListNode(6);
//    e.next = &f;
    
    subtract(head);
    
    return 0;
}
