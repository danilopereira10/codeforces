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
    int i = 0;
    int j = 0;
    int f = 0;
    int s = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cin >> s;
            if (s == 1) {
                break;
            }
        }
        if (s) {
            break;
        }
    }
    cout << abs(2 - i) + abs(2 - j) << endl;
}