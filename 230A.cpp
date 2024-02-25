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
    int s, n;
    cin >> s >> n;
    vti a;
    int b, c;
    for (int i = 0; i < n; i++) {
        cin >> b >> c;;
        a.push_back(make_tuple(b,c));
    }   
    sort(a.begin(), a.end());
    int w = 1;
    for (int i = 0; i < n; i++) {
        tuple<int,int> b = a[i];
        if (s > get<0>(b)) {
            s += get<1>(b);
        } else {
            w = 0;
            break;
        }
    }
    if (!w) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}