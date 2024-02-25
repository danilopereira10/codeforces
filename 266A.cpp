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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            a++;
        }
    }
    cout << a << endl;
}