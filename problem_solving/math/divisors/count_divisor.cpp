const int N=1e6; // Don't forget to resize N
vector<int>divs(N+1);
void count_divs() // Don't forget to call pre  in main
{
    
    for (int i = 1; i <=N; i++)
    {
        for (int j = i; j <=N; j+=i)
        {
            divs[j]++;
        }   
    }
}
