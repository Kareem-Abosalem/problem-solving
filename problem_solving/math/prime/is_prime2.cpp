//   Don't Forget To Call Sieve in Main
int N=1e6;    // Don't Forget To Resize N
vector<bool>is_prime(N+5,1);
void sieve()
{
    is_prime[0]=is_prime[1]=0;
    for (int i = 2; i<= N; i++)
    {
        if(is_prime[i])
        {
            for (int j = 2*i; j <=N; j+=i)
                is_prime[j]=0; 
        }
    }
}
