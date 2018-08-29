// class Solution {
// public:
//     int jumpFloor(int number) {
        
//         int first=1,second =2,out =0;
//         if(number == 0)
//         	return 0;
//         if(number == 1)
//         	return 1;
//         if(number ==2)
//         	return 2;
//         int i = 3;
//         for(int i =3;i<=number;i++)
//         {
//         	out = first + second;
//         	first = second;
//         	second = out;
//         }
//         return out;
        
//     }
// };
//
class Solution {
public:
    int jumpFloorII(int number) {
    	
    	vector<int> method;
    	method.push_back(1);//先存一个1
    	int i =1;
    	for(i;i<=number;i++)
    	{
    		int sum =0;
    		for(int j =0;j<method.size();j++)
    			sum+=method[j];
    		method.push_back(sum);

    	}
    	return method[number];
    }
};



