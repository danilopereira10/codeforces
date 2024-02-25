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
    string s;
    cin >> s;
    if (s.size() == 1) {
        if (s[0] == tolower(s[0])) {
            cout << (char) toupper(s[0]) << endl;
        } else {
            cout << (char) tolower(s[0]) << endl;
        }
    } else {
        int f = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == tolower(s[i])) {
                f = 1;
                break;
            }
        }
        if (!f) {
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == tolower(s[i])) {
                    cout << (char)toupper(s[i]);
                } else {
                    cout << (char)tolower(s[i]);
                }
            }
            //cout << endl;
        } else {
            cout << s;
        }
        cout << endl;
    }
   
}