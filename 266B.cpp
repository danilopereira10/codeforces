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
    string s;
    cin >> s;
    for (int i = 0; i <h; i++) {
        for (int i =1; i < s.size(); i++) {
            if (s[i] == 'G' && s[i-1] == 'B') {
                s[i-1] = 'G';
                s[i] = 'B';
                i++;
                //b[i-1] = 'G'
            }
        }
    }
    
    cout << s <<endl;

}