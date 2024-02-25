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
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                cout << "#";
            }
            cout << endl;
        } else {
            if (i % 4 == 1) {
                for (int j = 0; j < m - 1; j++) {
                    cout << ".";
                }
                cout << "#" << endl;
            } else {
                cout << "#";
                for (int j = 1; j < m; j++) {
                    cout << ".";
                }
                cout << endl;
            }
        }
    }   
}