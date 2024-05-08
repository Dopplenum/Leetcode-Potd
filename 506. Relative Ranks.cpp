class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0; i<n; i++){
            pq.push({score[i],i});
        }
        vector<pair<int,int>>res;
        while(!pq.empty()){
            int u=pq.top().first;
            int ind=pq.top().second;
            pq.pop();

            res.push_back({u,ind});
        }

        for(int i=0; i<res.size(); i++){
            cout<<res[i].first<<" "<<res[i].second<<"\n";
        }
        vector<string>ans(n);
        for(int i=0; i<n; i++){
            if(i==0){
                ans[res[i].second]="Gold Medal";
            }
            if(i==1){
                ans[res[i].second]="Silver Medal";
            }
            if(i==2){
                ans[res[i].second]="Bronze Medal";
            }
            if(i>2){
                ans[res[i].second]=to_string(i+1);
            }
        }
        return ans;
    }
};
