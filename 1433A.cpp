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
        string n;
        cin >> n;
        int c = (n[0]-'1')*10 + 1;
        for (int i = 2; i <= n.size(); i++) {
            c+= i;
        }
        cout << c << endl;
    }
  
  
    
    
}   