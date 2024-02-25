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
    int n;
    cin >> n;
    vi a;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a.push_back(b);
    }
    int b = 0, c = 0;
    int j = 0, k = n - 1;
    if (n%2 == 0) {
        for (int i = 0; i < n; i+=2) {
            if (a[j] > a[k]) {
                b+= a[j];
                j++;
            } else {
                b+= a[k];
                k--;
            }
            if (a[j] > a[k]) {
                c+= a[j];
                j++;
            } else {
                c+= a[k];
                k--;
            }
            
        }
    } else {
        for (int i = 0; i < n-1; i+=2) {
            if (a[j] > a[k]) {
                b+= a[j];
                j++;
            } else {
                b+= a[k];
                k--;
            }
            if (a[j] > a[k]) {
                c+= a[j];
                j++;
            } else {
                c+= a[k];
                k--;
            }
            
        }
        if (a[j] > a[k]) {
            b+= a[j];
            j++;
        } else {
            b+= a[k];
            k--;
        }
    }
    cout << b << " " <<  c << endl;

}