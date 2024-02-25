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
    string s;
    cin >> s;
    int a[s.size()];
    if (s[0] == s[1]) {
        a[0] = 1;
    } else {
        a[0] = 0;
    }
    for (int i = 1; i < s.size()-1; i++) {
        if (s[i] == s[i+1]) {
            a[i] = a[i-1] + 1;
        } else {
            a[i] = a[i-1];
        }

    }
    a[s.size()-1] = a[s.size()-2];
    int m;
    cin >> m;
    //tuple<int,int> a[m];
    for (int i = 0; i < m; i++) {
        int b, c;
        cin >> b >> c;
        if (c <= b) {
            cout << 0 << endl;
        } else if (b == 1) {    
            cout << a[c-2] - 0 << endl;
        } 
        else {
            cout << a[c-2] - a[b-2] << endl;
        }
        //a[i] = make_tuple(b,c);
    }

       
       
    
   
   
    
   
   
}   