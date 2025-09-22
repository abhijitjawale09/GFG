class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int temp = 0;
        
        while(n != 0) {
            temp = temp * 10 +  n % 10;
            n = n / 10;
        }
        return temp;
    }
};