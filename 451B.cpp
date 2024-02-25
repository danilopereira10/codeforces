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
    int n;
    cin >> n;
    vi a;
    vi c;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a.push_back(b);
        c.push_back(b);
    }
    sort(c.begin(), c.end());
    int l=-1, r=-1;
    int f = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] != c[i]) {
            if (f) {
                r = l = i;
                f = 0;
            } else {
                r = i;
            }
        }

    }
    if (l == r) {
        cout << "yes" << endl;
        cout << "1 1" << endl;
    } else {
        int f = 0;
        int d = r;
        for (int i = l; i <= r; i++) {
            if (a[d] != c[i]) {
                f = 1;
                break;
            }
            d--;
        }
        if (f) {
            cout << "no" << endl;
        } else {
            cout << "yes" << endl;
            cout << l+1 << " " << r+1 << endl;
        }
    }
     

   
}   