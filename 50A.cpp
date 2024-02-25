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
    if ( n % 2) {
        cout << n/2 * s + s/2 << endl;
    } else {
        cout << n / 2 * s << endl;
    }
}