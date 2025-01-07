//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int n = arr.size();
        int sum = 0;
        int i = 0 , j = n -1;
        int count = 0;
        
        while(i < j) {
            
            sum = arr[i] + arr[j];
            
            if(sum == target) {
                
                if(arr[i] == arr[j]) {
                    int freq = j - i + 1;
                    count += (freq * (freq - 1)) / 2;
                    break;
                }
                
                int countright = 1 , countleft = 1;
                
                while(i + 1 < j  && arr[i] == arr[i +1]) {
                    countleft++;
                    i++;
                }
                while(i + 1 < j  && arr[j] == arr[j - 1]) {
                    countright++;
                    j--;
                }
                
                
                count += countright * countleft;
                i++;
                j--;
                
            }else if(sum > target) {
                j--;
            }else{
                i++;
            }
        }
        return count;
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends