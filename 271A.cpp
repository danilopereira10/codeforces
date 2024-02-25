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
    int n ,h;
    cin >> n;
    int k = n;
    int f = 0;
    while (true) {
        k = k + 1;
        int a, b, c, d;
        a = k % 10;
        b = (k/10) % 10;
        c = k/100 % 10;
        d = k/1000;
        if (a != b && b != c && c != d && a != c && a != d && b != d) {
            break;
        } 
    }
    cout << k << endl;
    

}