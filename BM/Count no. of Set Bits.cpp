int countSetBits(int n)
    {
       int cnt = 0;
       for(int i=0;i<=n;i++){
           cnt += __builtin_popcount(i);
       }
       return cnt;
    }

//===============================
int countSetBits(int n)
    {
       int cnt = 0;
       while(n!=0){
           n = n & (n-1);
           cnt++;
       }
       return cnt;
    }
