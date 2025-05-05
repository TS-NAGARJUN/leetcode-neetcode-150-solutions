class Solution {
    public:
        int carFleet(int target, vector<int>& position, vector<int>& speed) {
            vector<pair<int,double>>carfleet;
            int m = speed.size();
            for(int i=0;i<m;i++)
            {
                carfleet.push_back({position[i] ,(double)(target-position[i])/speed[i]});
            }
            sort(carfleet.rbegin(),carfleet.rend());
            double lasttime = 0;
            int fleet = 0;
            for(auto [pos , time] : carfleet)
            {
                if(lasttime<time)
                {
                    fleet += 1;
                    lasttime = time;
                }
            }
            return fleet;
        }
    };