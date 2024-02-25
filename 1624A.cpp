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
        int c;
        cin >> c;
        int a=c, b=c;
        for (int i = 1; i < n; i++) {
            int c;
            cin >> c;
            if (c < a) {
                a = c;
            } else if (c > b) {
                b = c;
            }
        }
        cout << b - a << endl;
        
       
    }
  
  
    
    
}   