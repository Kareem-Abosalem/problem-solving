const int N=1e5; // Don't Forget To Resize N
vector<int>divs[N+1];
void Divisors()
{
    
    for (int i = 1; i <=N; i++)
    {
        for (int j = i; j <=N; j+=i)
        {
            divs[j].push_back(i);
        }   
    }   
}
