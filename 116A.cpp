//#include <stdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <tuple>
#include <cstring>
#include <cstdlib>
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
    int a[n], b[n];
    int c, d;
    int e = 0;
    int f = 0 ;
    for (int i = 0; i < n; i++) {
        cin >> c >> d;
        a[n] = c;
        b[n] = d;
        e = e - c + d;
        if (e > f) {
            f = e;
        }
    }
    cout << f << endl;
    





}