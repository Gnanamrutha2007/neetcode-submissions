class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int r=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>r){
                r=piles[i];
            }
        }
        int l=1;
        int res=r;

        while(l<=r){
            int k=(l+r)/2;

            long long time =0;

            for(int p:piles){
                time+= ceil((double)p/k);
            }

            if(time<=h){
                res=k;
                r=k-1;
            }
            else{
                l=k+1;
            }
        }
        return res;
    }
};
