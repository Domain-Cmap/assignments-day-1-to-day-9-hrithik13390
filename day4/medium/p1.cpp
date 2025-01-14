#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> st;

    for (int i = 0; i < 2 * n; ++i) {
        int num = nums[i % n];
        while (!st.empty() && nums[st.top()] < num) {
            result[st.top()] = num;
            st.pop();
        }
        if (i < n) {
            st.push(i);
        }
    }
    return result;
}
int main() {
    vector<int> nums = {1, 2, 1};
    vector<int> result = nextGreaterElement(nums);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl; 
    
    return 0;
}