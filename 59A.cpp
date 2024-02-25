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
    int a = 0, b = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]==toupper(s[i])) {
            a++;
        } else {
            b++;
        }
    }
    if (a > b) {
        for (int i = 0; i < s.size(); i++) {
            cout << (char)toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.size(); i++) {
            cout << (char)tolower(s[i]);
        }
    }
    cout << endl;
    
}