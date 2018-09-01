//输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字，
//例如，如果输入如下4 X 4矩阵： 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 
//则依次打印出数字1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.
class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) 
    {
    	vector<int>out;
    	int length = matrix.size();
    	if( length %2 ==0)//偶数
    	{
    		int x = length/2;
    		int y = length/2-1;
    		out.push_back(matrix[x][y]);//先加中心点
    		for(int i=1;i<=length-1;i=i+2)
    		{
    			if(x==0&& y==0)
    				break;
    			int flag1 =i;
    			while(flag1) //右
    			{	
    				if( x==0&& y==0)//如果到头
    				y++;
    				out.push_back(matrix[x][y]);
    				flag1--;
    			}

    			int flag2 =i;
    			while(flag2) //上
    			{	
    				if( x==0&& y==0)//如果到头
    					break;
    				x--;
    				out.push_back(matrix[x][y]);
    				flag2--;
    			}

    			int flag3 = i+1;
    			while(flag3) //左
    			{	
    				if( x==0&& y==0)//如果到头
    					break;
    				y--;
    				out.push_back(matrix[x][y]);
    				flag3--;
    			}

    			int flag4 = i+1;
    			while(flag4) //下
    			{	
    				if( x==0&& y==0)//如果到头
    					break;
    				x++;
    				out.push_back(matrix[x][y]);
    				flag4--;
    			}
    		}
    	}
    	if(length%2 == 1)//奇数
    	{
    		int x = (length-1)/2;
    		int y = (length-1)/2;
    		out.push_back(matrix[x][y]);//先加中心点
    		for(int i=1;i<=length-1;i=i+2)
    		{
    			int flag3 = i;
    			while(flag3) //左
    			{	
    				if( x==0&& y==0)//如果到头
    					break;
    				y--;
    				out.push_back(matrix[x][y]);
    				flag3--;
    			}

    			int flag4 = i;
    			while(flag3) //下
    			{	
    				if( x==0&& y==0)//如果到头
    					break;
    				x++;
    				out.push_back(matrix[x][y]);
    				flag4--;
    			}

    			if(x==0&& y==0)
    				break;
    			int flag1 =i+1;
    			while(flag1) //右
    			{	
    				if( x==0&& y==0)//如果到头
    					break;
    				y++;
    				out.push_back(matrix[x][y]);
    				flag1--;
    			}

    			int flag2 =i+1;
    			while(flag2) //上
    			{	
    				if( x==0&& y==0)//如果到头
    					break;
    				x--;
    				out.push_back(matrix[x][y]);
    				flag2--;
    			}
    		}
    	}
    	vector<int>out2;
    	out2.assign(out.rbegin(),out.rend());
    	return out2;
    }
};