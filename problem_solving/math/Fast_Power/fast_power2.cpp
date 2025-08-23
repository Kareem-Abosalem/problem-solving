int M=1e9+7;
int fast_power(int b,int p)
{
    if(p==0) return 1;
    int res=fast_power(b,p/2);
    if(p&1)
    return (((((res%M)*(res%M))%M)*(b%M))%M);
    else
    return ((res%M)*(res%M))%M;
}
