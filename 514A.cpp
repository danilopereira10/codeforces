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
    int t;
    cin >> t;
     

    for (int i = 0; i < t; i++) {
        ll n;
        cin >> n;
        string s = to_string(n);
        //cin >> s;
        if (s.size() == 1) {
            if (s[0] < '9' && s[0] > '4') {
                s[0] = '0'+'9'-s[0];
            }
        } else {
            int h = 0;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] != '0') {
                    h++;
                }
            }
            if (h >= 2) {
                int f = 1;
                if (s[0] <= '9' && s[0] > '4') {
                    if (s[0] == '9') {
                        //f = 1;
                        s[0] = 0;
                        h--;
                    } else {
                        f = 0;
                        s[0] = '0' + '9' - s[0];
                    }
                } else {
                    f = 0;
                    //h--;
                }
                //int f = 0;
                for (int i = 1; i < s.size(); i++) {
                    if (s[i]-'0' > '9'-s[i]) {
                        if (f ) {
                            if (h>1 && s[i] == '9') {
                                s[i]=0;
                                h--;
                            } else if (s[i]=='9') {
                                f=0;
                            } else {
                                f = 0;
                                s[i] = '9' - s[i] + '0';
                            }
                        } else {
                            s[i]= '9' - s[i] + '0';
                        }
                    } else if (s[i] != '0') {
                        //h--;
                        
                        f = 0;
                    } else {
                        if (f) {
                            s[i] = 0;
                        }
                    }
                }


            } else {
                if (s[0] < '9' && s[0] > '4') {
                    s[0] = '0' + '9' - s[0];
                }

            }
            //cout << s << endl;
            /*for (int i = 1; i < s.size(); i++) {
                if (s[i]-'0' > '9'-s[i]) {
                    s[i] = '9' - s[i] + '0';
                } 
            }*/
        }
        cout << s << endl;
    }
    //cout << s << endl;
   
}   