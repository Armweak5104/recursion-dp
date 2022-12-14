class Solution {
    public:
        double myPow(double n, int x){
            double var1;
            if (x == 0){
                return 1;
            }else{
                var1  = myPow(n*n,x/2);
                if (x%2 == 0){
                return var1;
                }else{
                if (x>0){
                    return var1*n;
                }else{
                    return var1*(1/n);
                }
            }  
        }
    }
};