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

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int e = max(a,b);
    e = max(e, c);
    e = max(e, d);
    int f = 0;
    if (e - a !=0) {
        cout << e-a << " ";
        f++;
    }
    if (e-b != 0) {
        cout << e-b << " ";
        f++;
    }
    if (e-c != 0) {
        if (f == 2) {
            cout << e - c << endl;
        } else {
            cout << e - c << " ";
        }
    }
    if (e-d != 0) {
        cout << e-d << endl;
    }
    
    
    
}