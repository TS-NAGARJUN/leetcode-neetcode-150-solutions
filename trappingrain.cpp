class Solution {
public:
    int trap(vector<int>& height) {
        //count=min(leftmax,rightmax)-h[i]
        int n=height.size();
        vector<int> leftmax=findleft(height,n);
        vector<int> rightmax=findright(height,n);
        int sum=0;

        for(int i=0;i<n;i++){
            int h= min(leftmax[i],rightmax[i])-height[i];

            sum+=h;
        }
        return sum;
    }
    vector<int> findleft(vector<int>& height,int& n){
        vector<int> leftmax(n);
        leftmax[0]=height[0];
        for(int i=1;i<n;i++){
            leftmax[i]=max(height[i],leftmax[i-1]);
        }
        return leftmax;
    }
    vector<int> findright(vector<int>& height,int& n){
          vector<int> rightmax(n);
        rightmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(height[i],rightmax[i+1]);

        }
        return rightmax;
    }
};