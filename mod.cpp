#include <iostream>
typedef long long int LL;
using namespace std;
LL gcd(LL a, LL b){
    if(b == 0)
        return a;
    return gcd(b, a%b);
}
LL gcdEx(LL a, LL b)
    {
    //Bezout's identity
    //ax+by=1
    LL x, y;
    if (b == 0){
        x = 1;
        y = 0;
        return a;
    }
    LL res = gcdEx(b, a % b);
    LL tmp = y;
    y = x - (a / b) * y;
    x = tmp;
    return res;
}
//Fast Modular Exponentiation
LL fastModExp(LL base, LL power, LL mod)
{
    LL tmp = 1;
    LL result = 0;
    while(power!=1)
    {
        if((power&1) == 0)
        {
            power >>= 1;
            base = (base * base) % mod;
        }
        else
        {
            power -= 1;
            tmp = (tmp * base) % mod;
        }
    }
    result = (tmp * base) % mod;
    if (result < 1)
        result += mod;
    return (LL)result;
}

/*
LL fastModExp(LL a, LL b, LL c)
{
    LL res = 0;
    for ( ;b ;b>>=1)
    {
        if (b&1)
        {
            res += a;
            if (res >= c)
                res -= c;
        }
        a <<= 1;
        if (a >= c)
            a -= c;
    }
    return res;
}
*/
/*
LL fastModExp(LL base, LL power, LL mod)
{
    LL res = 1;
    base %= mod;
    while (power)
    {
        if (power & 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        power >>= 1;
    }
    return res;
}
*/
int main()
{
    //cout<<fastModExp(2,1,5)<<endl;
    //cout<<fastModExp(2,10,5)<<endl;
    return 0;
}
