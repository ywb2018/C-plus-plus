
class Solution {
public:
    int rectCover(int number) {
    	int first =1, second = 2,out=0;
    	if(number<=2 && number>=0)
    		return number;
    	for(int i=3;i<=number;i++)
    	{
    		out = first + second;
    		first = second;
    		second = out;
    	}
    	return out;
    }
};