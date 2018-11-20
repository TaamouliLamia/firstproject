#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >>t;
    for(int i=0; i<t ;i++ )
    {
        int s,a,b,c;
        cin >>s>>a>>b>>c;
        int res = s/c;
        int var1 = res/a;
        var1 *=b;
        res += var1;
        cout <<res;

    }
    return 0;
}
