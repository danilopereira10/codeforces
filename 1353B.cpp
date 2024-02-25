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

vi j;
int main() {
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) {
        int n, k;
        cin >> n >> k;
        vi a, b;
        int c;
        for (int i = 0; i < n; i++) {
            cin >> c;
            a.push_back(c);
        }
        for (int i = 0; i < n; i++) {
            cin >> c;
            b.push_back(c);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int sum = 0;
        int i = 0;
        for (i = 0; i < k; i++) {
            if (a[i] < b[n-1-i]) {
            sum+= b[n-1-i];
            } else {
                break;
            }
        }
        for (; i < n; i++) {
            sum+=a[i];
        }
        cout << sum << endl;
    }

   
    
    
}   