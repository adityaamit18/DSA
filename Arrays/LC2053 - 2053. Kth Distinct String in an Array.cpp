class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        int cnt=0;
        for(auto i : arr){mp[i]++;}
        for(auto i :arr){
            if(mp[i]>1) continue;
            cnt++;
            if(cnt==k) return i;
        }
        return "";

    }
};
