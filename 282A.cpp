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
    cin >> s;
    int d = 0;
    int v = 0;
    string a;
    for (int i = 0; i < s; i++) {
        cin >> a;
        if (a[1] == '+') {
            d+=1;
        } else {
            d-=1;
        }
       
    }
    
    cout << d << endl;
    //cout << (s % 2 || s == 2 ? "NO" : "YES") << endl;

}