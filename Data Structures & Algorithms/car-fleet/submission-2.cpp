class Solution {
public:
    static bool compare(pair<int,int>a,pair<int,int>b){
        return a.first>b.first;
    }
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double>s;
        vector<pair<int,int>>values;
        for(int i=0;i<position.size();i++){
            values.push_back({position[i],speed[i]});
        }
        sort(values.begin(),values.end(),compare);

        for(int i=0;i<values.size();i++){
            if(s.empty()){
                s.push((double)(target-values[i].first)/values[i].second);
            }
            else{
                if(!s.empty() && s.top() >=((double)(target-values[i].first)/values[i].second)){
                    continue;
                }
                s.push((double)(target-values[i].first)/values[i].second);
            }
        }
        return s.size();
    }
};
