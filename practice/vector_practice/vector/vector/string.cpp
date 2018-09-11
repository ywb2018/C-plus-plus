//#include<string>
//#include<iostream>
//#include<vector>
//#include<stack>
//#include<queue>
//#include<map>
//#include <algorithm>
//
//
//using namespace std;
//int main()
//{
//	string s1(5, 'a');
//	//cout << s1<<endl;
//	stack<int> stk;
//	queue<int> qu;
//
//	const stack<int>::size_type stk_size = 10;
//	stack<int> intstack;
//	int ix = 0;
//	/*while (intstack.size() != stk_size)
//		intstack.push(ix++);
//	int erro_cnt = 0;
//	
//	while (intstack.empty() ==false)
//	{
//		int value = intstack.top();
//		if (value != --ix){
//			cerr << "oops ! expected " << ix
//				<< "received " << value << endl;}
//		intstack.pop();
//	}
//	cout << "our program run with "
//		<< erro_cnt << " errors!" << endl;
//	system("pause");*/
//
//	//pair<string, int> a;
//	//a.first = "hello";
//	//a.second = 4;
//	//map<string, int> firs;
//	//firs["trump"] = 60;
//	//map<string, int> ::iterator map_it = firs.begin();
//	//cout << map_it->first;
//	//cout <<" "<< map_it->second;
//	
//
//	map<string,int>mapstudent;
//	map<string, int>mapteacher(mapstudent);//复制一个matstudent到mapteacher
//	map<string, int>::iterator ite = mapteacher.begin();
//	mapstudent.insert(make_pair("mike",60));
//	//mapstudent.insert("taylor");
//	/*mapstudent.insert(ite, mapteacher);*/
//	cout<<"name:'mike' occurs "<<mapstudent.count("mike")<<" times"<<endl;
//
//	map<string, int>::iterator iter = mapstudent.find("mike");
//	int occ = 0;
//	cout <<"before:"<<occ << endl;
//	if (iter != mapstudent.end())
//		occ = iter->second;
//	cout << "after:" << occ << endl;
//
//	system("pause");
//}
