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
    int n,t;
    cin >> n >> t;
    vi a;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a.push_back(b);
    }
    //sort(a.begin(), a.end());
    int c = 0;
    int d = 0;
    int j = -1;
    int m = 0;
    for (int i = 0; i < n; ) {
        if (d+a[i] <= t) {
            
            if (d == 0) {
                j = i;
            }
            d+=a[i];
            //j = i;
            c++;
            if (c > m) {
                m = c;
            }
            i++;
        } else {
            while (d+a[i] > t && c > 0) {
                d-=a[j];
                c--;
                j++;
            }
            if (d+a[i] <= t) {
                if (d==0) {
                    j = i;
                }
                d+= a[i];
                c++;
            }
            i++;
           
            //break;
        }
    }
    cout << m << endl;



    
   
  
      


   
    
    
}   