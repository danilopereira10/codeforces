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
    int n, a = 0 , b = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            a++;
        } else {
            b++;
        }
    }
    if (a > b) {
        cout << "Anton";
    } else if (a < b) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
    cout << endl;
    
    return 0;
}