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
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int d = 0;
    int e = 0;
    if (a%2 == 0) {
        d++;
    } else {
        e++;
    }
    if (b%2 == 0) {
        d++;
    } else {
        e++;
    }
    if (c%2 == 0) {
        d++;
    } else {
        e++;
    }
    int f = 0;
    if (e > d) {
        f = 1;
    }
    if (a % 2 != f) {
        cout << 1;
    } else if (b % 2 != f) {
        cout << 2;
    } else if (c % 2 != f) {
        cout << 3;
    } else {
        for (int i = 3; i < n; i++) {
            cin >> b;
            if(b%2 != f) {
                cout << i + 1;
                break;
            }
        }
    }
    cout << endl;
    
}