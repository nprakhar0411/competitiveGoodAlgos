//Problem Statement - 

#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

//Author: Varun Goyal: govarun

#define f(i, n)    for(int i = 0; i < (n); ++i)
#define fa(i, a, n)  for(int i = (a); i <= (n); ++i)
#define fd(i, a, n)  for(int i = (a); i >= (n); --i)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define fill(a)  memset(a, 0, sizeof (a))
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define popb pop_back
#define ull unsigned long long
#define debug(x) cout << "> " << #x << " = " << x << '\n';
#define endl '\n'
typedef long double ld;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
inline bool EQ(double a, double b) { 
return fabs(a-b) < 1e-9; }
inline int two(int n) { return 1 << n; }

const ll mod = 1e9+7;

bool isPrime[];  // n + 1
void sieve_simple(int n){
    f(i, n + 1){
        isPrime[i] = 1;
    }
    isPrime[0] = 0;
    isPrime[1] = 0;
    for(int i = 2; i * i <= n; i++){
        if(isPrime[i] == 1){
            for(int j = i * i; j <= n; j += i){
                isPrime[j] = 0;
            }
        }
    }

}

bool isPrime[h - l + 1];
void segmented_sieve(int l, int h){
    int n = h - l;
    f(i, n + 1){
        isPrime[i] = 1;
    }

    for(ll i = 2; i * i <= r; i++){
        for(ll j = max(i * i, (l + i - 1 ) / i * i); j <= r; j += i){
            isPrime[j - l] = 0;
        }
    }
    //isPrime has the ans, lth element is at 0. 
}


int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    pre();
    



    return 0;
}
