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

int binarySearch(vi a, int n,int k) {
    int t = 0;
    int d = 0;
    int c = n-1;
    int b = (n-1) / 2;
    while (c -d != 0) {
        if (a[b] <= k) {
            t = b+1;
            d = b+1;
            b = (c + d) / 2;
            
        } else {
            c = b-1;
            b = (c + d) / 2;
            
        }
    }
    if (a[c] <= k && c + 1 > t) {
        t = c + 1;
    }
    return t;
}

int binarySearch3(vi a, int n,int k) {
    int l=0, r = n-1;
    int t = 0;
    while (l <= r) {
        int m = l + (r-l) / 2;
        if (a[m] <= k) {
            t = m + 1;
            l = m+1;
        } else {
            r = m - 1;
        }
    }
    
    return t;
}
/*
int binarySearch2(vi a, int n,int k) {
    int d = 0;
    int c = n-1;
    int m;
    int t = 0;
    while (c != d) {
        double s = (c+d+0.0)/2;
        m = ceil (s);
        if (a[m] > k) {
            c = m - 1;  
        } else {
            d = m;
            t = m +1;
        }
    }
    if (a[c] <= k && c+1 > t) {
        t = c+1;
    }
    return t;
}
    /*int t = -1;
    int d = 0;
    int c = n;
    int b = n / 2;
    while (c -d != 0) {
        if (a[b] <= k) {
            if (a[b] < k) {
                k = b + 1;
            }
            d = b;
            b = (c + b) / 2;
            
        } else {
            b = (b + d) / 2;
            c = b;
        }
    }
    return 0;
    */
   //return 0;
//}
vi j;
int main() {
    int t;
    cin >> t;
    ll a[100000];
    for (int i = 0; i < 100000; i++) {
        a[i] = 0;
    }
    for (int i = 0; i < t; i++) {
        int b;
        cin >> b;
        a[b-1]+=b;
    }
    ll maxxx[3];
    ll maxx;
    int h=1;
    int c=1;

    maxxx[0] = a[0];
    maxxx[1]=  max(a[0], a[1]);
    if (max(a[0],a[1]) > a[0]) {
        h = 1;
    } else {//
        h = 0;
    }
    c=2;

    
    for (int i = 2; i < 100000; i++) {
        if (h) {
            if (maxxx[(3+c-2)%3]+a[i] > maxxx[(3+c-1)%3]) {
                maxxx[c] = maxxx[(3+c-2)%3]+a[i];
                h = 1;
            } else {
                maxxx[c] = maxxx[(3+c-1)%3];
                h = 0;
            }
        } else {
            /*cout << maxxx[(3+c-1)%3] << endl;
            cout << a[i] << endl;
            cout << (c-1)%3 << endl;*/
            maxxx[c]=maxxx[(3+c-1)%3]+a[i];
            h=1;
        }
        c = (c+1)%3;

    }
    cout << maxxx[(3+c-1)%3] << endl;
   
}   