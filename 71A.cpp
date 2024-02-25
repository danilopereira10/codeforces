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
    int s;
    cin >> s;
    for (int i = 0; i < s; i++) {
        string st;
        cin >> st;
        if (st.size() > 10) {
            cout << st[0] << st.size() - 2 << st[st.size()-1] << endl;
        } else {
            cout << st << endl;
        }
    }
    //cout << (s % 2 || s == 2 ? "NO" : "YES") << endl;

}