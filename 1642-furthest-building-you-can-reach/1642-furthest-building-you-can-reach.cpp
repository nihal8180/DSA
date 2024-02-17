class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        priority_queue<int>pq;
        
        int n=heights.size();
        
        for(int i=0;i<n-1;i++){
            int req=heights[i+1]-heights[i];
            
            if(req>0){
                if(req<=bricks){
                
                bricks-=req;
                pq.push(req);
            }     
                else if(ladders){
                    if(pq.size()>0&&pq.top()>req){
                        auto it=pq.top();
                        pq.pop();
                        bricks+=it-req;
                        ladders--;
                        pq.push(req);
                    }
                
                else{
                    ladders--;
                }
                
            }
            else {
                return i;
               }
        }
    }
        
        return n-1;
    }
};