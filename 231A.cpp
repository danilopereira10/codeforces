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
    int s;
    cin >> s;
    int d = 0;
    for (int i = 0; i < s; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a > 0 && b > 0) || (a > 0 && c >0) || (b > 0 && c > 0)) {
            d+=1;
        }
    }
    cout << d << endl;
    //cout << (s % 2 || s == 2 ? "NO" : "YES") << endl;

}