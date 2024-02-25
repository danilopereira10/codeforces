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
    int n;
    cin >> n;
    int i =0;
    for (;i < n -1;i++) {
        if (i%2 == 0) 
            cout << "I hate that ";
        else
            cout << "I love that ";
    }
    if (i % 2 == 0) {
        cout << "I hate it";
    } else {
        cout << "I love it";
    }
    cout << endl;

   

    
   
}