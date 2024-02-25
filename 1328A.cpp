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
    int n;
    cin >> n;
    //vi a;
    int a , b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a%b == 0) {
            cout << 0 << endl;
        } else {
            cout << b - a%b << endl;
        }
    }
   
}