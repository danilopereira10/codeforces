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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int a= 0, c = 0;
        for (int i = 0; i < n; i++) {
            int b;
            cin >> b;
            if (b % 2 != i % 2) {
                if (b%2 == 0) {
                    a++;
                } else {
                    c++;
                }
            }
        }
        if (a != c) {
            cout << -1 << endl;
        } else {
            cout << a << endl;
        }
    }
  
  
    
    
}   