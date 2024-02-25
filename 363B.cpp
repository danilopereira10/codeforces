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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll m = 0;
    int j = 0;
    for (int i = 0; i < k; i++) {
        m+=a[i];
    }
    ll m2 = m;
    for (int i = k; i < n; i++) {
        m2 =m2+ a[i] -a[i-k];
        if (m2 < m) {
            m = m2;
            j = i-(k-1);
        }
    }
    cout << j+1 << endl;
    
    
}   