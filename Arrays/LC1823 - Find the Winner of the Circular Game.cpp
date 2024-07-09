class Solution {
public:
int solve(int n, int k){
    if(n==1) return 0;

    return (solve(n-1,k)+k)%n;  /*%n because if n=2 k=2
    we will be like solve(2,2) which means solve(1,2)+k = 1+2 =3 ; but we dont have 3 here as n =2 sowe use mod and 3%2 = 1*/
}
    int findTheWinner(int n, int k) {
        int ans = solve(n,k) +1; //+1 for one based indexing
        return ans;
    }
  
};

/* 
n    ans
1    1
2    1
3    3
4    1
5    3
*/
