class Solution {
public:
    double Power(double base, int exponent) 
    {
    	int fushu_flag =0;
    	int new_exponent;
    	double out=1;
    	if(exponent == 0)
    		return 1;
    	if(exponent == 1)
    		return base;

    	new_exponent = exponent <0? ~exponent+1:exponent;
    	fushu_flag = exponent <0? 1:0;

    	unsigned int flag = 1;
    	unsigned int count=0;//记录移动的位置;
    	while(flag)
    	{
    		if(flag&new_exponent)
    		{

    			for (int i = 0; i < pow(2,count); i++)
    			{
    				if(fushu_flag == 0)
    					out *= base; 
    				else
    					out*= (1/base);
    			}
    		}
    		flag = flag<<1;
    		count++;

    	}
    	return out;
    }
};