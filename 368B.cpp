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

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define CI cin >>
#define CO cout <<
#define EN << endl;



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
    int n, m;
    cin >> n >> m;
    
    
    int d[n];
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    //int c;
    //cin >> c;
    unordered_map<int, int> b;
    int a[n];
    a[n-1] = 1;
    b[d[n-1]] = 1;
    for (int i= n-2 ; i > - 1; i--) {
        if (b[d[i]] == 0) {
            b[d[i]]++;
            a[i] = a[i+1] + 1;

        } else {
            a[i] = a[i+1];
        }
        //a[i];
        //b[d[i]];
    }
    /*for (int i = 1; i < n; i++) {
        int c;
        cin >> c;
        if (b[i] == 0) {
            b[i]++;
            a[i] = a[i-1] + 1;
        } else {
            a[i] = a[i-1];
        }
        //if ()
    }*/

    for (int j = 0; j < m; j++) {
        int c;
        cin >> c;
        cout << a[c-1] - a[n-1] + 1 << endl; 
    }
    /*
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int a[n];
        cin >> a[0];
        int h = 0;
        int c = a[0];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            c += a[i];
            if (a[i] % 2 != a[0] % 2) {
                h = 1;
                //break;
            }
        }

        if (h || c % 2 == 1) {
            YES;
        } else
            NO;
    }*/

}   