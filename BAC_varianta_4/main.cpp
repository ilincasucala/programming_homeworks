#include <iostream>
#include <fstream>

using namespace std;
ifstream f("BAC.TXT");

int main()
{
    int a,nr,cont=1,b;
    a = 0;

	/* File  not empty */
    if ( f >> a )    //(bool)(f >> a) == 0
    {
		/* Read one number at a time from file f */
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

		/* Print count also for last number */
        cout<<a<<" "<<cont;
    }

    /* File empty */
    else
    {
        cout << "Fisierul este gol";
    }




}
