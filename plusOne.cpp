class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     int n = digits.size()-1;

        if(digits[n]<9){
            digits[n]=digits[n]+1;
            return digits;
        }

        else{
            
            while(n >= 0 && digits[n]==9){
                digits[n]=0;
                n--;
            }

            if(n == -1 && digits[n+1] == 0){
                digits.push_back(0);
                digits[0] = 1;
                return digits;
            }

            digits[n] = digits[n] + 1;
            return digits;
        }
    }
};



