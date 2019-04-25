
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
const int maxn = 1e3 + 5;
typedef long long ll;
int w,h,n;
vector <int> vec[maxn];
int vis[maxn],f[4];
struct fun
{
    int x1,x2,y1,y2;
}z[maxn];
int check(fun a, fun b, int i)//a为被检查的，
{
    bool flag = 1;
    if (a.x2 > b.x1 && a.x2 <= b.x2 && a.y2 > b.y1 && a.y2 <= b.y2)
        f[1] = i;
    if (a.x1 >= b.x1 && a.x1 < b.x2 && a.y2 > b.y1 && a.y2 <= b.y2)
        f[2] = i;
    if (a.x1 >= b.x1 && a.x1 < b.x2 && a.y1 >= b.y1 && a.y1 < b.y2)
        f[3] = i;
    if (a.x2 > b.x1 && a.x2 <= b.x2 && a.y1 >= b.y1 && a.y1 < b.y2)
        f[4] = i;
    if (a.x2 <= b.x1 || a.y1 >= b.y2 || a.x1 >= b.x2 || a.y2 <= b.y1)
        flag = 0;
    return flag;
}
int main()
{
    while(~scanf("%d%d%d", &w, &h, &n))
    {
        memset(f, 0, sizeof f);
        int ans = 0;
        int ansi = 0;
        for (int i = 1; i <= n; ++i)
            scanf("%d%d%d%d", &z[i].x1, &z[i].y1, &z[i].x2, &z[i].y2);//读入并存储每一个数据
        for (int i = n; i >= 1; --i)//从最后一个数开始检查
        {
            memset(vis, 0, sizeof vis);//对vis清空
            int cnt = 1;//cnt一开始为1
            for (int j = n; j > i; --j)//从最后一张纸与第i张开始对比
                if (check(z[i], z[j], i))//如果被覆盖，则将覆盖i的下标j加入vec
                    vec[i].emplace_back(j);//vec[i]里面存储了某张纸表面的纸张
            int ff = 0;
            for (int j = 1; j <= 4; ++j)
                if (f[j] == i)//每有一个角被覆盖，则ff++
                    ++ff;
            if (ff == 4)//如果四个角都被覆盖，则contniue
                continue;
            queue <int> q;//如果有角露出来，则：
            q.emplace(i);//在q中加入i纸张
            vis[i] = 1;
            while (!q.empty())//广搜
            {
                int t = q.front();//t为q的队头
                q.pop();//弹出队头
                for (int j = 0; j < vec[t].size(); ++j)//对于覆盖他的纸张开始搜索
                {
                    int tt = vec[t][j];
                    if (!vis[tt])//如果这张纸等于0，还没被搜索过
                    {
                        q.emplace(tt);//在队列中加入这张纸
                        vis[tt] = 1;//标记：看过
                        ++cnt;//统计数量+1
                    }
                }
            }
            if (cnt >= ans)
            {
                ans = cnt;
                ansi = i;
            }
        }
        for (int i = 1; i <= n; ++i)
            vec[i].clear();
        printf("%d %d\n", ans, ansi);
    }
    return 0;
}
