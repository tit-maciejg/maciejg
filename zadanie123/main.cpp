#include <iostream>
#include <fstream>


using namespace std;
fstream pliczek;
fstream odczyt;
int T[50];
int a, b, c=0, d=0, n=50;
void bombel(int T[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=1;j<n-i;j++)
		if(T[j-1]>T[j])
			swap(T[j-1], T[j]);
}
int main()
{
   cout << "Jesli chcesz policzyc liczby parzyste i nieparzyste wybierz 1" << endl << "Jesli chcesz posortowac liczby wybierz 2" << endl;
   cin >> a;
   switch (a)
   {
   case 1:
    odczyt.open("odczyt.txt", ios::in);
    while (odczyt.good())
    {
        odczyt>>b;
        if (b%2==0) c++;
        else d++;
    }
    cout << "Liczby parzyste: " << c << endl << "Liczby nieparzyste: " << d << endl;
    odczyt.close();
     cout <<  endl;
      cout <<  endl;
      cout << "Program Macieja Grzechowiaka" << endl;
    break;
   case 2:
       cout << "Posortowane(rosnaco): " << endl;
    odczyt.open("odczyt.txt", ios::in);
    for(int i=0;i<50; i++)
    {
        odczyt>>T[b];
        b++;
    }
    odczyt.close();
    bombel (T,n);
    for(int i=0;i<n;i++)
          cout<<T[i]<<", ";
 cout <<  endl;
  cout <<  endl;
     cout << "Program Macieja Grzechowiaka" << endl;
            break;
            default: system( "cls" );
            cout << "Nie ma takiej opcji/Do wyboru 1 oraz 2" << endl;
            cout <<  endl;
            main();

   }

    return 0;
}
