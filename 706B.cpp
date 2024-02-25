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

// C++ function to search a given key in a given BST


struct node {
	int key;
	struct node *left, *right;
    int counter=1;
};

// A utility function to create a new BST node
struct node* newNode(int item, int prev)
{
	struct node* temp
		= new struct node;
	temp->key = item;
	temp->left = temp->right = NULL;
    temp->counter=prev;
	return temp;
}

// A utility function to insert
// a new node with given key in BST
struct node* insert(struct node* node, int key, int prev)
{
	// If the tree is empty, return a new node
	if (node == NULL)
		return newNode(key, prev);

	// Otherwise, recur down the tree
	if (key < node->key) {
		node->left = insert(node->left, key, prev);
        node->counter++;
    }
    else if (key == node->key) {
        node->counter++;
		node->left = insert(node->left, key, node->counter);
        node->counter++;
    }
	else if (key > node->key)
		node->right = insert(node->right, key, node->counter+1);

	// Return the (unchanged) node pointer
	return node;
}

// Utility function to search a key in a BST
struct node* search(struct node* root, int key, struct node* lsn)
{
    //struct node* lsn;
	// Base Cases: root is null or key is present at root
	if (root == NULL)
		return lsn;
    else if (root->key == key) {
        return root;
    }

	// Key is greater than root's key
	if (root->key < key)
		return search(root->right, key, root);

	// Key is smaller than root's key
	return search(root->left, key, lsn);
}


vi j;
int main() {
    struct node* root = NULL;
	/*root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);

	// Key to be found
	int key = 6;

	// Searching in a BST
	if (search(root, key) == NULL)
		cout << key << " not found" << endl;
	else
		cout << key << " found" << endl;

	key = 60;

	// Searching in a BST
	if (search(root, key) == NULL)
		cout << key << " not found" << endl;
	else
		cout << key << " found" << endl;
	return 0;*/
    
    int n;
    cin >> n;
    vi a;
    int b;
    cin >> b;
    //root = insert(root, b, 1);
    for (int i = 1; i < n; i++) {
        int b;
        cin >> b;
        a.push_back(b);
        //insert(root, b, 1);
    }
    //sort(a.begin(), a.end());
    int q;
    cin >> q;
    //int b;
    //cin >> b;
    //root = insert(root, b, 1);
    struct node* sn = newNode(-1,0);
    
    for (int i = 0; i < q; i++) {
        int b;
        cin >> b;
        if (b >= 100000) {
            cout << n << endl;
        } else {
        //struct node* res = search(root, b, sn);
        //cout << res->counter << endl;
            cout << binarySearch2(a, n, b) << endl;;
        }
        //c.push_back(b);
    }

    /*
    int d = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n-1; i++) {
        d += a[n-1]-a[i];
    }
    cout << d << endl;

    */
}