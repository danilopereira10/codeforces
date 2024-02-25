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
    int t, u;
    cin >> t >> u;
    int m = max(t,u);
    int c = 6 - max(t,u) + 1;
    if (c == 0) {
        cout << "0/1" << endl;
    } else if (c==1) {
        cout << "1/6" << endl;
    } else if (c==2) {
        cout << "1/3" << endl;
    } else if (c==3) {
        cout << "1/2" << endl;
    } else if (c==4) {
        cout << "2/3" << endl;
    } else if (c==5) {
        cout << "5/6" << endl;
    } else if (c==6) {
        cout << "1/1" << endl;
    }
    

   
}   