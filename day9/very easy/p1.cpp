#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        
        int a = 0, b = 1, c = 1;
        for (int i = 3; i <= n; i++) {
            int next = a + b + c;
            a = b;
            b = c;
            c = next;
        }
        return c;
    }
};
int main() {
    Solution solution;
    int n = 4;
    cout << solution.tribonacci(n) << endl;
    return 0;
}
