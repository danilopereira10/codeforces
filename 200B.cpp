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
    int n;
    cin >> n;
    int c = 0;
    int d = 0;
    for (int i = 0; i < n; i++) {
        cin >> c;
        d += c;
    }
    cout << fixed << setprecision(5);
    cout << (d+0.0)/ n << endl;

}