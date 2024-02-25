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
typedef vector<tuple<int,int>> vti;
stack<tuple<int, int, int>> num;/*  */
stack<tuple<int, int, int>> num2;


vti dif;
typedef long long ll;
int main() {
    int n;
    cin >> n;
    int a = 0;
    int b = 0;
    int c;
    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c < 0) {
            if ( b == 0) {
                a++;
            } else {
                b--;
            }
        } else {
            b += c;
        }
        
    }
    cout << a << endl;
    
}