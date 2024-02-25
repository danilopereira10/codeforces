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
    int k;
    int f = 0;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k > 0) {
            f = 1;
            break;
        }
    }
    if (f) {
        cout << "HARD";
    } else {
        cout << "EASY";
    }
    cout << endl;
   
}