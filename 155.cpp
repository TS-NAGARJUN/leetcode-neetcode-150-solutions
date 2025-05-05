class MinStack {
    public:
        vector<vector<int>>res;
        MinStack() {
            
        }
        
        void push(int val) {
            if(res.size()>0){
            int minimum = getMin();
            if(val<minimum)
            {
                minimum = val;
            }
            res.push_back({val,minimum});
            }
            else{
                res.push_back({val,val});
        }
        }
        
        void pop() {
            res.pop_back();
        }
        
        int top() {
            return res.back()[0];
        }
        
        int getMin() {
            return res.back()[1];
        }
    };
    