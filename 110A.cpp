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
    string s;
    cin >> s;
    int a = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '4' || s[i] == '7') {
            a++;
        }
    }
    if (a == 4 || a == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}