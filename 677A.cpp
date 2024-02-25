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
    cin >> n >> h;
    int c;
    int k =0;
    for (int i = 0; i < n; i++) {
        cin >> c;
        if ( c > h) {
            k+=2;
        } else {
            k++;
        }
    }
    cout << k <<endl;

}