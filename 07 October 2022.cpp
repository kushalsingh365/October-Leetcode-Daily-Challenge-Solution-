class MyCalendarThree {
public:
    map<int,int> mp;
    MyCalendarThree() {
        mp.clear(); }
    //As map stores keys in sorted manner, so here we are just looping over map and increasing counter on start and decreasing on end to get number of overlaps at any point in time.
    int book(int start, int end) {
       mp[start]++, mp[end]--;
       int maxOverLap = 0, sum = 0;
       for(auto itr: mp){
           sum+=itr.second;
           maxOverLap = max(sum,maxOverLap); }
        return maxOverLap;
    }
};
