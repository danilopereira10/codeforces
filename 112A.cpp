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
    string s, b;
    cin >> s >> b;
    int p = 0;
    for (int i = 0; i < s.size(); i++) {
        if (tolower(s[i]) > tolower(b[i])) {
            cout << 1 << endl;;
            p = 1;
            break;
        } else if (tolower(b[i]) > tolower(s[i])) {
            cout << -1 << endl;
            p = 1;
            break;
        }
    }
    if (!p) {
        cout << 0 << endl;
    }
}