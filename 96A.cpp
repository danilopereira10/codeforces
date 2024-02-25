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
    string k;
    cin >> k;
    int a = 0;
    int b = 0;
    int f = 0;
    for (int i = 0; i < k.size(); i++) {
        if (k[i] == '0') {
            if (a >= 6) {
                f=1;
                break;
            }
            a++;
            b = 0;
        } else {
            if ( b >= 6) {
                f=1;
                break;
            }
            a=0;
            b++;
        }
    }
    if (f) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    









    return 0;
}