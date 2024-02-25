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
typedef vector<tuple<int,int>> vti;
stack<tuple<int, int, int>> num;/*  */
stack<tuple<int, int, int>> num2;


vti dif;
typedef long long ll;
int main() {
    int n, l;
    cin >> n >> l;
    vi a;
    int b;
    for (int i = 0; i < n; i++) {
        cin >> b;
        a.push_back(b);
    }
    sort(a.begin(), a.end());

    long double d = a[0] - 0;
    for (int i = 1; i < n; i++) {
        if ((a[i] - a[i-1]+0.0)/2 > d) {
            d = (a[i] - a[i-1]+0.0)/2;
        }
    }
    if (l - a[n-1] > d) {
        d = l - a[n-1];
    }
    cout << fixed << setprecision(10);
    cout << d << endl;
}