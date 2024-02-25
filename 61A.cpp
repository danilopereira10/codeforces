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
using namespace std;
typedef long long ll;
typedef vector<int> vi;
stack<tuple<int, int, int>> num;/*  */
stack<tuple<int, int, int>> num2;
vi dif;
typedef long long ll;
int main() {
    string s, k;
    cin >> s >> k;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == k[i]) {
            cout << 0;
        } else {
            cout << 1;
        }
    }
    cout << endl;
    
   
}