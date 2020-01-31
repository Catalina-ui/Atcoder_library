#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

ll N = /*任意の数*/;
ll K = /*任意の数*/;
ll mod = 1000000007;

vector<ll> fac(N), finv(N), inv(N);

void Cinit(){
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < N;i++){
        fac[i] = fac[i - 1] * i % mod;
        inv[i] = mod - inv[mod % i] * (mod / i) % mod;
        finv[i] = finv[i - 1] * inv[i] % mod;
    }
}

long long com(ll n,ll k){
    if(n < k)
        return 0;
    if(n < 0 || k < 0)
        return 0;
    return fac[n] * (finv[k] * finv[n - k] % mod) % mod;
}
