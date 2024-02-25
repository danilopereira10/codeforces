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
    int n;
    cin >> n;
    string s;
    int c = 0;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "Tetrahedron") {
            c+=     4;
        } else if (s== "Cube") {
            c+= 6;
        } else if (s=="Octahedron") {
            c+= 8;
        } else if (s=="Dodecahedron") {
            c+=12;
        } else {
            c+=20;
        }
    }

    cout << c << endl;
    
}