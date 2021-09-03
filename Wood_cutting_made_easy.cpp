int Solution::solve(vector<int> &A, int B) 
{
    long long low=0;
    long long high= *max_element(A.begin(),A.end());
    long long mid;
    long long n;
    long long count=0;



    while(low<=high)
    {
        mid= low+(high-low)/2;
        count=0;

        for(int i:A)
        if(i>mid)
        count += i-mid;

        if(count>=B)
        {
            n=mid;
            low=mid+1;

        }

        else
        high=mid-1;

    }


    return n;
}
