/*
输入u和v，然后再m中
输入a和b，如果不存在，就建立一个，然后建立联系
即：vis[i]中加上后者的j，i和j为两个字符串对应的数值
然后从0到u之间深搜，中间有u到u+v之间的，就记录
然后存储到set里面
注意：建立一个双向map*/

#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <set>
using namespace std;
map<string,int>m;//
map<int,string>str;
set<string>shu;
vector<int> mapp[400100];//记得开大
int l,r;
int vis[200100];//记录每个值是否被访问过
void dfs(int x)
{
	if(mapp[x].size()==0)
	{
		return;
	}
	for(int i=0;i<mapp[x].size();i++)
	{
		if(vis[mapp[x][i]]==0)
		{
			vis[mapp[x][i]]=1;
			if(mapp[x][i]>=l&&mapp[x][i]<=r)
			{
				shu.emplace(str[mapp[x][i]]);
			}
			dfs(mapp[x][i]);
		}
	}
}
int main()
{
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		//cout<<t<<endl;
		m.clear();
		str.clear();
		shu.clear();
		for(int i=1;i<=40000;i++)
			mapp[i].clear();
		memset(vis,0,sizeof(vis));
		int u,n,mm;
		string s;
		cin>>u>>n>>mm;
		int cnt=0;//与每个一字符串建立联系
		for(int i=1;i<=u;i++)
		{cin>>s;cnt++;m[s]=cnt;str[cnt]=s;}
		l=cnt+1;
		for(int i=1;i<=n;i++)
		{	cin>>s;
			if(m[s]!=0)
				shu.insert(s);
			else{cnt++;m[s]=cnt;str[cnt]=s;}
		}
		r=cnt;
		string s1,s2;
		for(int i=1;i<=mm;i++)
		{
			cin>>s1>>s2;
			if(m[s1]==0){cnt++;m[s1]=cnt;str[cnt]=s1;}
			if(m[s2]==0){cnt++;m[s2]=cnt;str[cnt]=s2;}
			mapp[m[s1]].emplace_back(m[s2]);
			//int t=m[s2];
			//cout<<t;
		}//建立建立完成，开始搜索
		//cout<<mapp[1].size();
		for(int i=1;i<=u;i++)
		{
			if(vis[i]==0)
			{
				//printf("ppp");
				vis[i]=1;
				dfs(i);
			}
		}
		set<string>::iterator it1;
		for(it1=shu.begin();it1!=shu.end();it1++)
		{
			cout<<*it1<<" ";
		}
		cout<<endl;
	}
	/*for(int i=tt;i>=0;i--)
	{
		set<string>::iterator it1;
		for(it1=shu[i].begin();it1!=shu[i].end();it1++)
		{
			cout<<*it1<<" ";
		}
		cout<<endl;
	}*/
}