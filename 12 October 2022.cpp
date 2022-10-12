class Solution {
public:
	int largestPerimeter(vector<int>& a) {
		int n=a.size(),mx=0;
		sort(a.begin(),a.end());
		for(int i=n-3;i>=0;i--)  {
			if(a[i]+a[i+1]>a[i+2]) {
				return a[i]+a[i+1]+a[i+2];
			}
		}
		return mx;
	}
};
