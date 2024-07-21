class Solution {
public:
    int nthUglyNumber(int n) {
        
        priority_queue<int, vector<int>, greater<int>> pq;
        unordered_set<int> st;
        pq.push(1);
        st.insert(1);

        //run the loop for n-1 times  
        int count = 0;
        while (count<n-1) {
            
            long long top = pq.top();
            pq.pop();
            
            //as numbers should within integer limit
            //so the follwing has to be,  <=INTMAX
            long long two = top*2, three = top*3, five = top*5;

            if(two<=INT_MAX && st.find(two)==st.end()){
                pq.push(two);
                st.insert(two);
            } 
                
            if(three<=INT_MAX && st.find(three)==st.end()){
                pq.push(three);
                st.insert(three);
            } 
            if(five<=INT_MAX && st.find(five)==st.end()){
                pq.push(five);
                st.insert(five);
            }

            count++;
        }
        
        return pq.top();
    }
};