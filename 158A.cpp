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
stack<tuple<int, int, int>> num;
stack<tuple<int, int, int>> num2;
vi dif;
typedef long long ll;
int main() {
    int s, n;
    cin >> s >> n;
    int d = 0;
    int v = 0;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a > 0) {
            d+=1;
        } else {
            break;
        }
    }
    v = a;
    for (int i = n; i < s; i++) {
        cin >> a;
        if (a > 0 && a >= v) {
            d+=1;
        } else {
            break;
        }
    }
    cout << d << endl;
    //cout << (s % 2 || s == 2 ? "NO" : "YES") << endl;

}