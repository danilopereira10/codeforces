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
typedef vector<string> vs;


vti dif;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    

    for (int i = 0; i < t; i++) {
        vs a;
        int e = 1;
        int s;
        cin >> s;
        int k = 0;
        while (s != 0) {
            if (s % 10 == 0) {
                s = s / 10;
                e*=10;
            } else {
                k++;
                a.push_back(to_string(s%10 * e));
                s = s/10;
                e*=10;
            }
        }
        cout << k << endl;
        for (int i = 0; i < a.size()-1; i++) {
            cout << a[i] << " ";
        }
        cout << a[a.size()-1] << endl;
    }
    
    
    
}