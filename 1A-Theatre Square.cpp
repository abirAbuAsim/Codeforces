/*
    Verdict : Accepted
    OJ      : Codeforces
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n, m;
    double a;
    while(scanf("%lf%lf%lf", &n, &m, &a) == 3)
    {
        double result = std::ceil(n / a) * std::ceil(m/a);
        printf("%.0lf\n", result);
    }
    return 0;
}
