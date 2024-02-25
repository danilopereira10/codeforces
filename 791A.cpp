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
    int n, b;
    cin >> n >> b;
    int a = 0;
    while (n <= b) {
        n = n * 3;
        b = b * 2;
        a++;
    }
    cout << a << endl;
}