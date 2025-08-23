long long sumDigitsUpto(long long x) {
    if (x <= 0) return 0;
    long long res = 0;
    for (long long factor = 1; factor <= x; factor *= 10) {
        long long higher = x / (factor * 10);
        long long cur    = (x / factor) % 10;
        long long lower  = x % factor;
        res += higher * 45 * factor;
        res += (cur * (cur - 1) / 2) * factor;
        res += cur * (lower + 1);
    }
    return res;
}
