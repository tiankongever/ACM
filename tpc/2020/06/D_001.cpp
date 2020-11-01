#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

// 0x3f3f3f3f = 1061109567 (recommended)
const int inf = 0x3f3f3f3f;
// 0x3FFFFFFFFFFFFFFFLL = 4611686018427387903 (recommended)
const LL Inf = 0x3FFFFFFFFFFFFFFFLL;
// 10^9 + 7
const int mod = 1000000007;

#define memsetMin(arr) memset(arr, 0xc0, sizeof(arr))
#define memsetMax(arr) memset(arr, 0x3f, sizeof(arr))

//memset
//memset(dpMin, 0x3f, sizeof(dpMin)); // inf
//memset(dpMax, 0xc0, sizeof(dpMax)); // -inf

char strT[1111111]; //一位数组储存多个字符串
char* nowT;
struct Op {
    char op[5];
    LL pos;
    LL c, a, b;
    char* pt;
};
Op ops[5555];


map<int, pair<LL, char>> ans;

int main() {
    int t, q;
    scanf("%d", &t);
    while(t--) {
        nowT = strT;
        scanf("%s", nowT);
        nowT += strlen(nowT) + 1;

        scanf("%d", &q);
        for(int i=0; i<q; i++) {
            Op* p = ops + i;
            scanf("%s", p->op);
            if(p->op[0] == '+') {
                scanf("%lld%s", &p->pos, nowT);
                p->pt = nowT;
                nowT += strlen(nowT) + 1;
            } else if(p->op[0] == '!') {
                scanf("%lld%lld%lld%lld", &p->a, &p->b, &p->c, &p->pos);
            } else if(p->op[0] == '?') {
                scanf("%lld", &p->pos);
            }
        }
        ans.clear();
        for(int i=q-1;i>=0;i--){
            Op* p = ops + i;
            if(p->op[0] == '+') {
                LL pos = p->pos;
                LL len = strlen(p->pt);

                for(auto& kv: ans){
                    auto& pp = kv.second;
                    if(pp.first == -1 || pp.first < pos){ //已经找到答案，或者在 pos 之前
                        // do nothing
                    }else if(pos <= pp.first && pp.first < pos + len ){ // 在插入的字符串 [pos, pos+len)之内
                        pp.second = p->pt[pp.first - pos];
                        pp.first = -1;
                    }else{
                        pp.first -= len; //在字符串之后，需要前移
                    }
                }

            } else if(p->op[0] == '!') {
                LL pos = p->pos;
                LL dis = p->b - p->a + 1;
                LL len = dis * p->c;

                for(auto& kv: ans){
                    auto& pp = kv.second;
                    if(pp.first == -1 || pp.first < pos){ //已经找到答案，或者在 pos 之前
                        // do nothing
                    }else if(pos <= pp.first && pp.first < pos + len ){ // 在插入的字符串 [pos, pos+len)之内
                        //由于重复了 c 次，需要取模，计算在第几次
                        pp.first = p->a - 1 + (pp.first - pos) % dis;
                    }else{
                        pp.first -= len; //在字符串之后，需要前移
                    }
                }
            } else if(p->op[0] == '?') {
                ans[i].first = p->pos - 1;
            }
        }
        for(auto& kv: ans){
            auto& p = kv.second;
            if(p.first != -1){
                p.second = strT[p.first];
            }
            printf("%c\n", p.second);
        }

    }

    return 0;
}


