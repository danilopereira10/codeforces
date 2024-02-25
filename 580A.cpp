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
    int c = 1;
    int b;
    int d;
    cin >> d;
    int max = 1;
    for (int i = 1; i < n; i++) {
        cin >> b;
        if (b >= d) {
            c++;
            if (c > max) {
                max = c;
            }
        } else {
            c = 1;
        }
        d = b;
    }
    cout << max << endl;
    
}