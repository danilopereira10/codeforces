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
    
    string s, t;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        char b = toupper(s[i]);
        if (b == 'A' || b=='O' || b=='Y' || b=='E' || b=='U' || b=='I') {

        } else {
            cout << "." << (char)tolower(s[i]);
        }
    }
    cout << endl;
    
    return 0;
}