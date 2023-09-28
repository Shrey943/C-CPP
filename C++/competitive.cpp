# include <iostream>
# include <string>
# include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {

        stack<pair<ListNode*, int>> stack;
        vector<int> res;
        int i = 0;
        while(head->next != nullptr){
            res.push_back(0);
            while (!stack.empty() && head->val>stack.top().first->val){
                res[stack.top().second] = head->val;
                stack.pop();
            }
            stack.push({head, i});
            i++;
        }
        return res;
    }
};