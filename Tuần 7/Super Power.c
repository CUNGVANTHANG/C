int powerMod(long long int base, long long int power){
    long long int mod = 1337;
    long long int ret = 1;
    while(power){
        if(power % 2 == 1) ret = (ret * base) % mod;
        base = (base * base) % mod;
        power = power / 2;
    }
    return ret;
}

int superPow (int a, int b[], int len){
    if(len == 0) return 1;
    int last = b[len - 1];
    b[len - 1] = '\0';
    len--;
    return (powerMod(superPow(a, b, len), 10) * powerMod(a, last)) % 1337;
}
