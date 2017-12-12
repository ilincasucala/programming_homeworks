#include <iostream>
#include <fstream>
#include <stdint.h>

using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");

int main()
{
    int n,m,a[100][100],maxx,minn,cont=0,b[100],mic,mare,c[100];
    fin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            fin>>a[i][j];

    //Calculez minimul si maximul pe fiecare coloana
    for(int j=0;j<m;j++)
    {
        mic=a[0][j];
        mare=a[0][j];
        for(int i=1;i<n;i++)
        {
            if(a[i][j]>mare) mare=a[i][j];
            if(a[i][j]<mic) mic=a[i][j];
        }
        b[j]=mic;
        c[j]=mare;
    }
    for(int i=0;i<n;i++)
    {
        maxx=a[i][0];
        minn=a[i][0];

        //Cautammin si max pe fiecare linie
        for(int j=1;j<m;j++)
        {
            if(a[i][j]>maxx) maxx=a[i][j];
            if(a[i][j]<minn) minn=a[i][j];
        }

        // Pentru fiecare min si max de pe linie
        for(int j=0;j<m;j++)
        {
            // Verificam daca e "SA"
            if(a[i][j]==maxx)
            {
                if(a[i][j]==b[j])
                {
                    cont++;
                }
            }
            if(a[i][j]==minn)
            {
                if(a[i][j]==c[j])
                {
                    cont++;
                }

            }
        }
    }
    fout<<cont;
}

/*int main2()
{
    int n,m,i,j,minn,maxx,b[100],c[100],am=0,aM=0,a[100][100],pz=0,pzz=0,p[100],r[100];
    fin>>n>>m;

    for(i=0;i<n;i++)
    {
        minn=a[i][0];
        maxx=a[i][0];
        for(j=0;j<m;j++)
        {
            if(a[i][j]<minn)
                {
                    minn=a[i][j];
                    pz=j;
                }
            if(a[i][j]>maxx)
                {
                    maxx=a[i][j];
                    pzz=j;
                }
        }
        am++;
        b[am]=minn;
        aM++;
        c[aM]=maxx;
    }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(a[i][j]`





               )


    return 0;
}
*/
