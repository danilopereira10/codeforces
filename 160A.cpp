//#include <stdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <tuple>
#include <cstring>
#include <cstdlib>
#include <bits/stdc++.h>
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
    vi a;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        sum += b;
        a.push_back(b);
    }
    sort(a.begin(), a.end());
    /*if (sum % 2 == 1) {
        sum++;
    }*/
    int  c = 0;
    int sum2 = 0;
    for (int i = n-1; i > -1; i--) {
        sum2 += a[i];
        c++;
        if (sum2 > sum/2) {
            break;
        }
    }
    cout << c << endl;
    
}