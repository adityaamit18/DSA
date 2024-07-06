class Solution {
public:
    int passThePillow(int n, int time) {

        int rounds = time/(n-1); //round is basically from start to end or end to start - one journey

        int ans = 0;

        //if round is even that means motion was to and fro and it is from the start || if round is odd that means it pass is at the end 

        if(rounds%2==0){  //for even round ; pass will begin from start 
            ans = (1+time%(n-1));
        }
        else{//for odd round
        ans=(n-time%(n-1)); //we did n- because it will start from back

        }
        return ans;
    }
};
