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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int e;
    cin >> e;
    int f = 0;
    for (int i = 1; i <= e; i++) {
        if(i%a == 0 || i%b == 0 || i%c == 0 || i %d == 0) {
            f++;
        }
    }
    cout << f << endl;
    
   
}