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
    int a[4];
    a[0] = a[1] = a[2] = a[3] = 0;
    int b;
    for (int i = 0; i < n; i++) {
        cin >> b;
        a[b-1]++;
    }
    int c = a[3];
    b = min(a[0], a[2]);
    c += b;
    a[0] -= b;
    a[2] -= b;
    c += a[2];
    c += a[1] / 2;
    a[1] = a[1] % 2;
    if (a[1] > 0) {
        if (a[0] >= 2) {
            a[0] -= 2;
        } else if (a[0] >= 1) {
            a[0]--;
        }
        c++;
    }
    c+=a[0] / 4;
    if (a[0] % 4 != 0) {
        c++;
    }
    a[0] = 0;
    cout << c << endl;
}