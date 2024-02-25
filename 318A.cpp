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
    ll n, k;
    cin >> n >> k;
    ll c;
    if (n % 2 == 0) {
        if (k <= n / 2) {
            c=  2*(k-1)+1;
        } else {
            c = 2*(k - n / 2);
        }
    } else {
        if (k <= n / 2 + 1) {
            c = 2*(k-1)+1;
        } else {
            c = 2 * (k-n/2-1);
        }
    }
    cout << c << endl;
   
}