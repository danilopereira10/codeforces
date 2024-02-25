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
    string s;
    cin >> s;
    string k = "hello";
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == k[j]) {
            j++;
            if (j > 4) {
                break;
            }
        }
    }
    if (j > 4) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << endl;
    

}