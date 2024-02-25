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
    int a[26];
    for (int i = 0; i < 26; i++) {
        a[i] =0;
    }
    for (int i = 0; i < s.size(); i++) {
        a[tolower(s[i])-'a'] = 1;
    }
    int f = 0;
    for (int i = 0; i < 26; i++) {
        if (!a[i]) {
            f = 1;
            break;
        }
    }
    if (f) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
   
   
}