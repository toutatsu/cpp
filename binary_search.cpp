//ABC144 verified

//めぐる式二分探索
long long ng=-1LL,ok=1000000000000LL,mid;//ng:解が存在しない値　ok:解が存在する値

    while(abs(ok-ng)>1LL){
        mid=(ok+ng)/2LL;
        if(solve(?))ok=mid;
        else ng=mid;
    }

//ABC146 verified
while(abs(ok-ng)>1LL)mid=(ok+ng)/2LL,(solve(mid))?ok=mid:ng=mid;
