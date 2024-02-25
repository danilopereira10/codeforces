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
#include <cstdlib>


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
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




using namespace std;

int proc(ll s1, ll s2, int j, int k, vll a, vector<vll> matrix) {
    if (matrix[j][k] == 0) {
        return 0;
    } else if (s1 == s2) {
        return 1;
    } else if (j >= k) {
        matrix[j][k] = 0;
        return 0;
    }  else {
        ll s1b = s1, s2b = s2;
        int jb = j;
        if (j % 2 == 0) {
            s1b -= a[j];
            jb = j+1;
            
        } else {
            s2b -= a[j];
            jb = j + 1;
        }
        int r = proc(s1b, s2b, jb, k, a, matrix);

        if (r != 1) {
            s1b = s1;
            s2b = s2;
            int kb = k;
            if (k % 2 == 0) {
                s1b -= a[k];
                kb --;
            } else {
                s2b -= a[k];
                kb --;
            }
            r = proc(s1b, s2b, j, kb, a, matrix);
        }
        matrix[j][k] = r;
        return r;
    }

}

int main()
{
    int t;
    cin >> t;
    

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<vector<ll>> matrix;
        for (int i = 0; i < n; i++) {
            vll a;
            matrix.push_back(a);
            for (int i = 0; i < n; i++) {
                matrix[i].push_back(-1);
            }
        }
        vll a;
        ll s1 = 0, s2 = 0;
        int c;
        cin >> c;
        a.push_back(c);
        s1 =  a[0];
        int f = 0;
        for (int i = 1; i < n; i++) {
            cin >> c;
            a.push_back(c);
            if (i % 2 == 0) {
                s1 += c;
                //s1 += a[i];
            } else {
                s2 += c;
            }
        }

        if (s1 == s2) {
            YES;
        } else {
            int r = proc(s1, s2, 0, n-1, a, matrix);
            if (r) {
                YES;
            } else {
                NO;
            }   
        }
        
    }
    return 0;
} 