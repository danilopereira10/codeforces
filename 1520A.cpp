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
        string s;
        cin >> s;
        unordered_map<char,int> a;
        int f = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i-1]) {
                if (a[s[i]] == 0) {
                    a[s[i-1]] =1;
                    a[s[i]]=1;
                } else {
                    f = 1;
                    break;
                }
            }
        }
        if (f) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
       
    }
  
  
    
    
}   