#include<stdio.h>

typedef long long int lld;

#define s(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)

#define p(x) printf("%lld",x)

lld main()

{
+
    lld n,a,b;

    s(n,a,b);

    p(n-(a+b));

}
