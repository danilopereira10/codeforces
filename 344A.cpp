//#include <stdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <tuple>
#include <cstring>
#include <cstdlib>
#include <bits/stdc++.h>
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
    string s, s2;
    cin >> s;
    int c = 1;
    for (int i = 1; i < n; i++) {
        cin >> s2;
        if (s[0] != s2[0]) {
            c++;
            s = s2;
        }
    }
    cout << c << endl;
    
}