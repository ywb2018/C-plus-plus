#include<algorithm>
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        
        int length = rotateArray.size();
        int head = 0;
        int tail = length-1;
        int mid;
        
        while(tail -head > 1)
        {
            mid = (tail + head)/2;
            if(rotateArray[mid]>=rotateArray[tail])//说明mid落在了前一段
            	head = mid;
            else if(rotateArray[mid]<= rotateArray[tail])//说明落在了后半段
            	tail = mid;
        }
        if(rotateArray[head] >= rotateArray[tail])//找到了分界线
        	return rotateArray[tail];
        else return rotateArray[0];

    }
};