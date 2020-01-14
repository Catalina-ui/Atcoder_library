ll gcd(ll n1, ll n2){
    return n2 == 0 ? n1 : gcd(n2, n1 % n2);
}

ll lcm(ll n1,ll n2){
    return n1 / gcd(n1, n2) * n2;
}
