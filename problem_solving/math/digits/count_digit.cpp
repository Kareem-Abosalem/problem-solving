int digit_count(int a){
    int temp=1,c=1,res=0;
    while (temp*10<=a)
    {
        res+=temp*9*c;
        temp*=10;
        c++;
    }
    res += (a - temp + 1) * c;
    return res;
}
