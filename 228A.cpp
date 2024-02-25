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
    int a, b, f, d;
    unordered_map<int,int> e;
    
    cin >> a >> b >> f >> d;
    e[a]=1;
    int c = 1;
    if (e[b] == 0) {
        c++;
        e[b] =1;
    }
    if (e[f] == 0) {
        c++;
        e[f] = 1;
    }
    if (e[d] == 0) {
        c++;
        
    }
    cout << 4 - c << endl;
    
   
}