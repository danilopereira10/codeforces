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
    int n, k;
    cin >> n >> k;
    int c = 240 - k;
    int d = 0;
    for (int i = 1; i <= n; i++) {
        c -= 5 * i;
        if (c < 0) {
            break;
        } else {
            d++;
        }
    }
    cout << d << endl;
    
    
}