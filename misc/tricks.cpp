int d4[5]={0,1,0,-1,0};//0-3 1-4
for(int i=0;i<4;i++)a[d4[i]][d4[i+1]];

int d8[10]={1,1,1,0,-1,-1,-1,0,1,1};//0-7 2-9
for(int i=0;i<8;i++)a[d8[i]][d8[i+2]];

for(int dx=-1; dx<=1; dx++)for(int dy=-1; dy<=1; dy++)


for(i=0;i<r*c;i++)cin>>s[i/c][i%c];


#define STR(var) #var   //引数にした変数を変数名を示す文字列リテラルとして返すマクロ関数

#define chmax(p,q)(p=max(p,q))
