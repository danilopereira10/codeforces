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
    int k, n, w;
    cin >> k >> n >> w;
    int c = (w * k + k) * w / 2;
    int s = c - n;
    if (s > 0) {
        cout << s << endl;
    }  else {
        cout << 0 << endl;
    }
}