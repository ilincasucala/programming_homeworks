#include <iostream>
#include<fstream>
using namespace std;
ifstream f("BAC.TXT");
//ofstream g("date.out");
int main()
{
    int a,nr,cont=1,b;
    a = 0;

    if ( f >> a )    //(bool)(f >> a) == 0
    {
        while( f>>nr )
        {
            b = a;
            a = nr;

            if(a==b)
            {
                cont++;
            }

            /* a!= b*/
            else
            {

                cout<<b<<" "<<cont<<" ";
                cont=1;
            }

        }

        cout<<a<<" "<<cont;
    }

    /* File not empty */
    else
    {

        cout << "Fisierul este gol";
    }




}
