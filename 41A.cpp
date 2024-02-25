//#include <stdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <tuple>
#include <cstring>
#include <cstdlib>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
stack<tuple<int, int, int>> num;/*  */
stack<tuple<int, int, int>> num2;
vi dif;
typedef long long ll;
int main() {
    
    string s, t;
    cin >> s >> t;
    int f = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != t[s.size() - 1 - i]) {
            f = 1;
            break;
        }
    }
    if (f) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}