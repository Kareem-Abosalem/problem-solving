const int mod=1e9+7;  // Don't Forget To Resize mod
int fast_power(int base,int power)
{
    int res=1;
    while (power)
    {
        if(power&1)
        {
            res*=base%mod;
            res%=mod;
            power--;
        }
        else
        {
            base*=base;
            base%=mod;
            power/=2;
        }
    }
    return res;   
}
