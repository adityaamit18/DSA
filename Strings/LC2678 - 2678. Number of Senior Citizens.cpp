class Solution {
public:
    int countSeniors(vector<string>& details) {
        int i=0,cnt=0;
        while(i<details.size()){
            string age = details.substr(11,2);
            
            if(ageInt>60) cnt++;
            i++;
        }
        return cnt;
    }
};
