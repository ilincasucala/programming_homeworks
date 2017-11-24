#include <iostream>
#include <iomanip>

using namespace std;

int a[100][100];
int main()
{
    int n,i,j,nr,nrTura,c,cn,l;
    cin>>n;
    nr=1;
    cn=n;
    l=1;
    c=1;
    nrTura=(cn+1)/2;
    while(nrTura!=0)
    {
        for(j=c;j<=cn;j++)
        {
            a[l][j]=nr;
            nr++;
        }

        for(i=l+1;i<=cn;i++)
        {
            a[i][cn]=nr;
            nr++;
        }
        for(j=cn-1;j>=c;j--)
        {
            a[cn][j]=nr;
            nr++;
        }
        for(i=cn-1;i>=l+1;i--)
        {
            a[i][c]=nr;
            nr++;
        }
        l++;
        c++;
        cn--;


        nrTura--;

    }

    /*  afisare matrice  */
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            std::cout<<std::setw(4)<< a[i][j]<<" ";
        }
        cout<<endl;

    }


    return 0;
}
