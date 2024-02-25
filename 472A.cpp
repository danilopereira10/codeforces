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

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<tuple<int,int>> vti;
stack<tuple<int, int, int>> num;/*  */
stack<tuple<int, int, int>> num2;
typedef vector<string> vs;


vti dif;
typedef long long ll;

ll _sieve_size;
bitset <1202> bs;
vi primes;
vi tprimes;

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

vi j;
int main() {
    int t;
    cin >> t;
    int b = 0;
    if (t%2 == 0) {
        b = t / 2;
        if (b%2 != 0) {
            cout << b-1 << " " << b+1 << endl;
        } else {
            cout << b << " " << b << endl;
        }
    } else {
        b = t / 2;
        int c = t/2 + 1;
        int d;
        if (c % 2 != 0) {
            d = c;
            c = b;
            b = d;
        }
        if (b % 3 != 0) {
            int f = b%3;
            b += 3 - f;
            c -= 3 - f;
            if (b%2 == 0) {
                b += 3;
                c-=3;
            }
        }
        cout << b << " " << c << endl;

    }

}