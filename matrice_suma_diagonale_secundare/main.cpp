#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");

int cnt;

void citire(int a[101][101], int &n)
{
    fin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            fin>>a[i][j];
        }

}
void afisare(int a[101][101], int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

void crescator(int l, int n, int a[101][101])
{
    int x,nn=n;
    while(nn!=1)
    {

        for(int j=1;j<nn;j++)
        {
            if(a[l][j+1]<a[l][j])
            {
                x=a[l][j+1];
                a[l][j+1]=a[l][j];
                a[l][j]=x;
            }

            cnt ++;

        }

        nn--;

    }
}
int sumaDiagVecine(int n, int a[101][101])
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s=s+a[i][i+1]+a[i+1][i];
    }
    return s;
}

int main ()
{
    cnt = 0;
    int a[101][101],n;
    citire(a,n);
    cout<<sumaDiagVecine(n,a);
    for(int i=1;i<=n;i++)
    {
        crescator(i,n,a);
    }

    cout << endl;
    afisare(a,n);
    cout << endl;
    cout << cnt;
}

int b[1000];
bi;

i = 1;
while (f[i] !=0)
{
    if (f[i] > 1)
    {
        b[bi] = a[i];
        bi++;
    }
    i++;
}



