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
#include <set>


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<tuple<int,int>> vti;
stack<tuple<int, int, int>> num;/*  */
stack<tuple<int, int, int>> num2;
typedef vector<string> vs;



vi j;
int main() {
    int n, t;
    cin >> n >> t;
    int a[n-1];
    unordered_map<int, int> b;
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];    
    }
    int i = 1;
    while (b[i] == 0 && i < t) {
        b[i] = 1;
        i = i + a[i-1];
    }
    if (i == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
  
    
    
}   