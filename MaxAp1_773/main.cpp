#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");



int f[10000];   // 1  2   7
int a[10000];   // 11 100 22

void cresteFrecventa(int x)
{
    int i=1;

    while( (f[i]!=0) && (a[i] != x) )
    {
        i++;
    }

    if (f[i] == 0)
    {
        a[i] = x;
    }

    f[i]++;
}

int frecventaMaxima()
{
    int  i,maxx;
    i=1;
    maxx=f[i];
    i=2;
    while(f[i]!=0)
    {
        if(f[i]>maxx)
        {
            maxx=f[i];
        }
        i++;
    }

    return maxx;
}

int main()
{
    /* Citim numerele din fiser */
    int m, n, x, maxx, maxn, i, first;

    fin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            fin>>x;


            /* Pentru fiecare numar crestem frecventa */
            cresteFrecventa(x);
        }
    }




    /* Cautam frecventa maxima*/
    maxx=frecventaMaxima();
    /* Cautem numerele cu frecventa maxima */

    first = true;

    i=1;
    while(f[i]!=0)
    {
        if(f[i]==maxx)
        {
            //cout<<a[i]<<" ";
            if (first == true)
            {
                maxn = a[i];
                first = false;
            }
            else
            {
                if (a[i] > maxn)
                {
                    maxn = a[i];
                }
            }
        }
        i++;
    }

    cout << maxn;

    return 0;
}
