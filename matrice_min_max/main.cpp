#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("matrice6.in");
ofstream fout("matrice6.out");

void citire(int a[101][101], int &n)
{
    int nn;
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            fin>>a[i][j];
            //cout << a[i][j];
        }
    }
}

void afisare(int a[101][101], int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            fout<<a[i][j]<<" ";
        fout<<endl;
    }
}

int maxim(int a[101][101], int n)
{
    int maxx=a[1][1];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(a[i][j]>maxx) maxx=a[i][j];
    return maxx;
}

int minim(int a[101][101], int n)
{
    int minn=a[1][1];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(a[i][j]<minn) minn=a[i][j];
    return minn;
}

bool valMaxLinie(int a[101][101], int n, int i, int maxx)
{
    for(int j=1;j<=n;j++)
        if(a[i][j]==maxx) return 1;
    return 0;
}

void adaugareMinim(int a[101][101], int n, int i, int minn)
{
    for(int j=1;j<=n;j++)
        a[i][j]=a[i][j]+minn;
}

int main()
{
    int a[101][101],n,maxx,minn;
    citire(a,n);
    minn=minim(a,n);
    maxx=maxim(a,n);

    cout << minn << endl << maxx;
    for(int i=1;i<=n;i++)
    {
        if(valMaxLinie(a,n,i,maxx)==1)
        {
            adaugareMinim(a,n,i,minn);
        }
    }
    afisare(a,n);
}
