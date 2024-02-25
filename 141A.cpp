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
    string p, q, s;
    cin >> p >> q >> s;
    int a[26], b[26];
    for (int i = 0; i < 26; i++) {
        a[i] = b[i] = 0;
    }
    for (int i = 0; i < p.size(); i++) {
        a[p[i]-'A']++;
    }
    for (int i = 0; i < q.size(); i++) {
        a[q[i]-'A']++;
    }
    for (int i = 0; i < s.size(); i++) {
        b[s[i]-'A']++;
    }
    int f = 1;
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            f = 0;
            break;
        }
    }
    if (!f) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
   
}