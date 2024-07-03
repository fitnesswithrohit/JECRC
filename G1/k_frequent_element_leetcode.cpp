class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int,int>> p;
        vector<int> sol;
        unordered_map<int,int> freq;

        for(auto i:nums){
            freq[i]++;
        }

        for(auto i:freq){
            p.push({i.second,i.first});
        }

        while(k>0 && !p.empty()){
            sol.push_back(p.top().second);
            p.pop();
            k--;
        }
       
        return sol;
    }
};