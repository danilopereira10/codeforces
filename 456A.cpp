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
    vti e;
    int a[n];
    int f[n];
    for (int i = 0; i <n; i++) {
        a[i] = n+1;
        f[i] = 0;
    }
    //int b[100000];
    for (int i = 0; i < n; i++) {
        int c, d;
        cin >> c >> d;
        a[c-1]=min(a[c-1], d);
        f[c-1] = max(f[c-1],d);
        
    }
    vi b;
    for (int i=0; i < n; i++) {
        if (a[i] != n+1) {
            b.push_back(i);
        }
    }

    int g = 0;

    for (int i = 1; i < b.size(); i++) {
        if (f[b[i]] < a[b[i-1]]) {
            g = 1;
        }
    }
    if (g) {
        cout << "Happy Alex" << endl;
    } else {
        cout << "Poor Alex" << endl;
    }
   
    
   
   
    
  
    
}   