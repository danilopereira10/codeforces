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
    int j = 0;
    if (s.size() <= 2) {
        cout << s << endl;
    } else {
        int c = 0;
        int k = -1;
        if (s[0] == 'W') {
            c++;
        } else {
            k = 0;
        }
        j = 0;
        
        int f = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == 'W') {
                if (c != 0) {
                    k = i - 1;
                }
                f = 0;
                c = 1;
            } else if (s[i] == 'U' && c == 1) {
                f = 0;
                c++;
            } else if (s[i] == 'B' && c == 2) {
                f = 1;
                c=0;
                for (int a = j; a <= k; a++) {
                    cout << s[a];
                }
                if (j <= k) {
                    cout << " ";
                }
                j = i+1;
                k = i;
            } else {
                c = 0;
                k = i;
            }


        }
        if (!f) {
            k = s.size() - 1;
        }
        for (int a = j; a <= k; a++) {
            cout << s[a];
        }
        cout << endl;
    }
}