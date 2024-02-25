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
stack<tuple<int, int, int>> num;
stack<tuple<int, int, int>> num2;
vi dif;
typedef long long ll;
int main() {
    string s;
    int a = 0, b = 0, c = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i+=2) {
        if (s[i] == '1') {
            a++;
        } else if (s[i] =='2') {
            b++;
        } else {
            c++;
        }
    }
    if (a > 0) {
        cout << 1;
    }
    for (int i = 1; i < a; i++) {
        cout << "+1";
    }
    if (a>0 && b > 0) {
        cout << "+2";
    } else if (b > 0) {
        cout << 2;
    }
    for (int i = 1; i < b; i++) {
        cout << "+2";
    }
    if (a>0 && b == 0 && c >0) {
        cout << "+3";
    } else if (b > 0 && c > 0) {
        cout << "+3";
    } else if (a == 0 && b == 0 && c > 0) {
        cout << 3;
    }
    for (int i = 1; i < c; i++) {
        cout << "+3";
    }
    cout << endl;
}