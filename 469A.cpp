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
    //vi a;
    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
    int p ;
    cin >> p;
    int b;
    for (int i = 0; i < p; i++) {
        cin >> b;
        a[b-1] = 1;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> b;
        a[b-1] = 1;
    }
    int f = 1;
    for (int i = 0; i < n; i++) {
        if (!a[i]) {
            f = 0;
            break;
        }
    }

   if (f) {
        cout << "I become the guy." << endl;

   } else {
        cout << "Oh, my keyboard!" << endl;
   }
}