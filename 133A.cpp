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
    string s;
    cin >> s;
    int f = 0;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == 'H' || s[i] == '9' || s[i] == 'Q') {
            f = 1;
            break;
        }
    }
    if (f) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << endl;

    
   
}