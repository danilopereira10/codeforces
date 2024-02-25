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
    vi a;
    int b ;
    int j, k;
    int max = -1;
    int min = 101;
    for (int i =0; i < n; i++) {
        cin >> b;
        if (b > max) {
            max = b;
            j = i;
        } 
        if (b <= min){
            min = b;
            k = i;
        }   
        a.push_back(b);
    }
    if (j < k) {
        cout << j + (n-1) - k << endl;
    } else {
        cout << j + (n-1) - k - 1 << endl;
    }
   
}