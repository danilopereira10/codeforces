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
    vi f;
    int b;
    for (int i = 0; i < m; i++) {
        cin >> b;
        f.push_back(b);
    }
    
    sort(f.begin(), f.end());
    int min = f[n-1] - f[0];
    for (int i = 1; i+n-1 < m; i++) {
        if (f[n+i-1] - f[i] < min) {
            min = f[n+i-1] - f[i];
        }
    }
    cout << min << endl;
      
}