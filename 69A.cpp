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
    int k;
    int a , b, c;
    int d = 0, e = 0, f = 0;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> a >> b >> c;
        d += a;
        e += b;
        f += c;
    }
    if (d == 0 && e == 0 && f == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}