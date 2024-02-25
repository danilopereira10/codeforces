//#include <stdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <tuple>
#include <cstring>
#include <cstdlib>
#include <bits/stdc++.h>
#include <iomanip>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <set>


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<tuple<int,int>> vti;
stack<tuple<int, int, int>> num;/*  */
stack<tuple<int, int, int>> num2;
typedef vector<string> vs;



ll _sieve_size;
bitset <52> bs;
vi primes;

void sieve(ll upperbound) {
    _sieve_size = upperbound + 1;
    bs.set(); 
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
        for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
        primes.push_back((int) i);
    }
}

bool isPrime(ll N) {
    if (N <= _sieve_size) return bs[N];
    for (int i = 0; i < (int)primes.size(); i++)
        if (N % primes[i] == 0) return false;
    return true;
}



/*int binary_search(int k) {
    int d = 0;
    int b = 28;
    int c = 14;
    while(b != d) {
        if (a[c] )
    }

}*/

int main() {
    int m, s;
    cin >> m >> s;
    if (s== 0 && m == 1) {
        cout << "0 0";
    } else if (s == 0 || s > 9 * m) {
        cout << -1 << " " << "-1" << endl;
    } else {
        int s2 = s;
        if (s2 / 9 < m-1) {
            cout << 1;
            s2--;
        } else if (s2/9 < m) {
            if (s2 % 9 != 0) {
                cout << s2 % 9;
                s2 -= s%9;
            } else {
                cout << 1;
                s2--;
            }
        } 
        
        if(s2/9 == m) {
            for (int i = 0; i < m; i++) {
                cout << 9;
            }
            cout << " ";
        } else {
            //s2--;
            int i = s2/9;
            int j = s2%9;
            for (int k = 1; k < m - min(m-1, (i+1)); k++) {
                cout << 0;
            }
            if (i < m - 1) {
                cout << j;
            }
            for (int k = 0; k < i; k++) {
                cout << 9;
            }
            cout << " ";
        }
        if (s < 9) {
            cout << s % 9;
            for (int i = 1; i < m; i++) {
                cout << 0;
            }
            cout << endl;
        } else {
            cout << 9;
            int s3 = s - 9;
            int i = s3/9;
            int j = s3%9;
            for (int k = 0; k < i; k++) {
                cout << 9;
            }
            if (i < m -1) {
                cout << j;
            }
            for (int k = 1 + i + 1; k < m ; k++) {
                cout << 0;
            }
            cout << endl;
        }
    }
   
   
    
  
    
}   