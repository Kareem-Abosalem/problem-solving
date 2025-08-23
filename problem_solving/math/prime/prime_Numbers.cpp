    //   prime Numbers
    //   Don't Forget To Call Sieve in Main
int N=1e8;  // Don't Forget To Resize N
vector<int>prime;
void sieve()
{
    vector<bool>is_prime(N+5,1);
    is_prime[0]=is_prime[1]=0;
    for (int i = 2; i*i < N; i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i;j<N;j+=i)
            {
                is_prime[j]=0;
            }
        }
    }  
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i]) 
        {
            prime.push_back(i);
        }
    }
}
