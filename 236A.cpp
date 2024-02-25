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
    int v[256];
    for (int i = 0; i < 256; i++) {
        v[i] = 0;
    }
    int a = 0, b = 0, c = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if(v[s[i]] == 0) {
            a++;
        }
        v[s[i]]++;
    }
    if (a % 2) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
}