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
    int a, b, c;
    cin >> a >> b >> c;
    int r[8];
    r[0] = a + b + c;
    r[1] = a * b + c;
    r[2] = a * b * c;
    r[3] = (a + b) * c;
    r[4] = a * (b + c);
    r[5] = a + b * c;
    int max = r[0];
    for (int i = 1; i < 6; i++) {
        if (r[i] > max)
            max = r[i];
    }
    cout << max << endl;
}