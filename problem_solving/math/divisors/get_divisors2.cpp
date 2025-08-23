void factorize(int n, map<int, int> &mp) {
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            n /= i;
            mp[i]++;
        }
    }
    if (n > 1)
        mp[n]++;
}
void divisors(long long x, map<int, int> &mp, map<int, int>::iterator it, vector<long long> &divs) {
    if (it == mp.end()) {
        divs.push_back(x);
        return;
    }

    for (int i = 0; i <= it->second; ++i) {
        divisors(x, mp, next(it), divs);
        x *= it->first;
    }
}
