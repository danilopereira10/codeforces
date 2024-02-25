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
    int n;
    cin >> n;
    int c = n / 100;
    int d = n % 100;
    c += d / 20;
    d = d % 20;
    c += d / 10;
    d = d % 10;
    c += d / 5;
    d = d % 5;
    c += d / 1;
    
    cout << c << endl;
}