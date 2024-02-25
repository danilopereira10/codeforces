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
    int n, k;
    cin >> n >> k;
    if (min(n,k) % 2 == 0) {
        cout << "Malvika";
    } else {
        cout << "Akshat";
    }
    cout << endl;
    /*
    if (n==1 || k==1) {
        cout << "Akshat";
    } else if (n==2 && k == 2) {
        cout << "Malvika";
    } else if ((n==3 && k == 2) || (n==2 && k ==3)){
        cout << "Akshat";
    }
    
    int e = min(k*l/nl, c*d);
    e = min(e, p/ np);*/

}