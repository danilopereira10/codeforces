//#include <stdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <tuple>
#include <cstring>
#include <cstdlib>
#include <bits/stdc++.h>
#include <iomanip>
#include <unordered_map>
#include <set>
#include <algorithm>

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
    unordered_map<string, int> b;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (b[s] == 0) {
            b[s] = 1;
            cout << "OK" << endl;
        } else {
            cout << s+to_string(b[s]) << endl;
            b[s]++;
        }
    }
    
}