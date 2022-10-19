class Solution {
public:
    class myComparator{
        public:
        bool operator()(const pair<int,string>& a, const pair<int,string>& b){
            if(a.first==b.first){
                return a.second<b.second;
            }
                
            return a.first>b.first;
        }    
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> freq;
        priority_queue<pair<int,string>,vector<pair<int,string>>,myComparator> pq;
        
        for(auto word:words) freq[word]++;
        
        for(const auto& word:freq){
             pq.push({word.second, word.first});
             if(pq.size()>k) {
                 pq.pop(); 

             }
        }
        
        vector<string> res;    
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        reverse(res.begin(),res.end());

        return res;
    }
};
