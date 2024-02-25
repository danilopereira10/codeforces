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
    int f = 0;
    if (!(n%4) || !(n%7) || !(n%44) || !(n%47) || !(n%74) || !(n%77) || !(n%444) ||
    !(n%447) || !(n%474) || !(n%477) || !(n%744) || !(n%747) || !(n%774) || !(n%777)) {
        f = 1;
    }
    if (f) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << endl;
   
}