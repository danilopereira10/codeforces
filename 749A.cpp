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
int a[29];
void initi() {
    int i = 0;
    int c = 2;
    int d = 3;
    for (int i = 0; i < 29; i++, c*=2, d+=c) {
        a[i] = d;
    }
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
    int t;
    cin >> t;
    vi a;
    if (t == 2) {
        cout << 1 << endl;
        cout << 2 << endl;
    } else if (t == 3) {
        cout << 1 << endl;
        cout << 3 << endl;
        
    } else if (t%2 == 0) {
        cout << t /2 << endl;
        for (int i = 0; i < t / 2 - 1; i++) {
            cout << "2 ";
        }
        cout << 2 << endl;
    } else {
        cout << t / 2 << endl;
        for (int i = 0; i < t / 2 - 1; i ++) {
            cout << "2 ";
        }
        cout << 3 << endl;
    }
    
   
  
      


   
    
    
}   