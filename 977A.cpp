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
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        if (n % 10 == 0) {
            n = n/10;
        } else {
            n--;
        }
    }
    cout << n << endl;
    
}