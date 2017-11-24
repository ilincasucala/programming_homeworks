#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
    char c[101];
    cin.get(c,101);
    int l,ok,i,j;
    l=strlen(c);

    /*****************************************/
    /** Verificam daca un sir este palindrom */
//    i=0;
//  ok=1
//    while((ok==1) && (i<l/2))
//    {
//        if(c[i]!=c[l-1-i])
//            {
//                ok=0;
//            }
//            else i++;
//    }
//    if(ok==1)
//        cout<<"DA";
//    else cout<<"NU";



    /**********************************************************/
    /** Facem uppercase la prima litera a fiecarei propozitii */

    //ana are mere?! Ea merge la piata? ea merge la piata?
	
	/* Facem mare prima litera, ea nu are un semn de punctuatie inainte */
    c[0]=toupper(c[0]);
	
	/* Cautam caracter ca caracter */
    for(int i=0;i<l;i++)
    {
		/* Cautem un semn de punctuatie */
        if(c[i]=='.' || c[i]=='?' || c[i]=='!')
        {
            //c[i+1]=toupper(c[i+1]);
            j=i;
            ok=0;
			
			/* Cautam urmatoarea litera de dupa semnul de punctuatie gasit */
			/* E posibil ca un semn sa fie combinat eg. '?!!', sau sa fie spatii dupa semn */
            while(j<l && ok==0)
            {
				
				/* Daca am gasit o litera dupa semnul de punctuatie*/
                if((tolower(c[j])>='a') && (tolower(c[j])<='z'))
                {
					/* Facem majuscula litera gasita. Ne oprim din cautat litere. */
                    c[j]=toupper(c[j]);
                    ok=1;
                }
				
				/* Inca nu am gasit o litera dupa semnul de punctuatie */
                else 
				{
					/* Cautam mai departe */
					j++;
				}
            }
        }
    }
    //for(int i=0;i<l;i++)
    cout<<c;
     return 0;
}
