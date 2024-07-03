class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int,int>> p;
        vector<int> sol;
        unordered_map<int,int> freq;
        for(auto i:nums){
            freq[i]++;//1-3, 2-2, 3-1
        }
        for(auto i:freq){// 3-1, 2-2, 1-3
            p.push({i.second,i.first});
        }
        while(k>0 && !p.empty()){
            sol.push_back(p.top().second);
            p.pop();
            k--;//2,1,0
        }
       
        return sol;
    }
};