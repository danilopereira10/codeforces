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
    if (s.size() > 0) {
        cout << (char)toupper(s[0]);
    }
    for (int i = 1; i < s.size(); i++) {
        cout << s[i];
    }
    cout << endl;
}