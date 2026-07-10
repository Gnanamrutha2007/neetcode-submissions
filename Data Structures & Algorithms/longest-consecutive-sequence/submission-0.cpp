class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int longest=0;
        for(int num:nums){
            st.insert(num);
        }
        for(int num:st){
            if(st.find(num-1)==st.end()){
                int length=1;
                while(st.find(num+length)!=st.end()){
                    length++;
                }
                if(length>longest){
                    longest=length;
                }

            }
        }
        return longest;
    }
};
