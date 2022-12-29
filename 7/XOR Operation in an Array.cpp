class Solution {
public:
    int xorOperation(int n, int start) {
        int a[n];
        int xr=0;
        for(int i=0;i<n;i++){
            a[i]=start+2*i;
            xr=xr^a[i];
        }
        return xr;
    }
};