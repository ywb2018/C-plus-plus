//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//const int initM = 1000;
//
//struct node {
//	int x;
//	int y;
//}my_Node;
//
//int X[4] = { 0, 0, 1, -1 };
//int Y[4] = { 1, -1, 0, 0 };
//
//int M;
//int a[initM][initM];
//bool b[initM][initM] = { false };
//
//bool is_judge(int x, int y) 
//{
//	if (x >= M || x<0 || y >= M || y<0)
//		return false;
//	if (a[x][y] == 0 || b[x][y] == true)
//		return false;
//	return true;
//}
//
//void my_bfs(int x, int y) 
//{
//	queue<node> qu;
//	my_Node.x = x;
//	my_Node.y = y;
//	qu.push(my_Node);
//	b[x][y] = true;
//	while (!qu.empty())
//	{
//		node top = qu.front();
//		qu.pop();
//		for (int i = 0; i<4; i++) {
//			int newX = top.x + X[i];
//			int newY = top.y + Y[i];
//
//			if (is_judge(newX, newY))
//			{
//				my_Node.x = newX;
//				my_Node.y = newY;
//				qu.push(my_Node);
//				b[newX][newY] = true;
//			}
//		}
//	}
//}
//
//int main() {
//	
//	cin >> M;
//	int count = 0;
//	int out = 0;
//	while (count < M)
//	{
//		/*for (int i = 0; i<M; i++)
//			cin >> a[count][i];*/
//		int i = 0;
//		while (i<M)
//		{
//			cin >> a[count][i];
//			i++;
//		}
//		count++;
//	}
//	for (int i = 0; i<M; i++) 
//	{
//		for (int j = 0; j<M; j++) 
//		{
//			if (a[i][j] == 1 && b[i][j] == false) 
//			{
//				out++;
//				my_bfs(i, j);
//			}
//		}
//	}
//	cout << out << endl;
//	return 0;
//}