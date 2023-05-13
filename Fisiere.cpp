#include "pch.h"
#include <iostream>
#include <fstream>

#include<iostream>
using namespace std;

int main()
{
    long long i, v[13], x,c,n,ins;
    ifstream fin("date.in");
    ofstream fout("date.out");
    while (fin >> x)
    {

        for (i = 0; i < 13; i++)
        {
            v[i] = x % 10;
            x = x / 10;
        }
        for (i = 0; i <= 6; i++) {
            swap(v[i], v[12 - i]);
        }

        //  for(i=0;i<=6;i++){
        int main();
        {
            int n, v[100];
            cout << "Numarul de elemente din vector: ";
            cin >> n;
            for (int i = 0; i < n; i++) {
                cout << "Elementul de pe pozitia " << i << ": ";
                cin >> v[i];
            }
            int c, ins;
            cout << "Adauga un numar pe pozitia: ";
            cin >> c;
            cout << "Adauga numarul: ";
            cin >> ins;

            if (v[0] == 1)
                fout << "sexul persoanei este masculin iar anul nasterii este 19";
            else if (v[0] == 2)
                cout << "sexul persoanei este feminin iar anul nasterii este 19";
            else if (v[0] == 6)
                cout << "sexul persoanei este feminin iar anul nasterii este 20";
            else if (v[0] == 5)
                cout << "sexul persoanei este masculin  iar anul nasterii este 20";
            cout << v[1] << v[2] << " ";
            cout << "luna nasterii este a-" << v[4] << "-a ,ziua " << " " << v[5] << v[6] << endl;
        }
        //}
     //  fin.close();
    //fout.close();
        return 0;
        if (c < n)
        {
            n++;
            for (int i = n - 1; i >= c; i--)
                v[i] = v[i - 1];
            v[c] = ins;
            for (int i = 0; i < n; i++)
                cout << v[i] << " ";
        }
        else if (c == n) {
            v[n] = ins;
        }
        else cout << "pozitie incorecta";
        int val;
        cout << "Adauga la sfarsitul vectorului valoarea: ";
        cin >> val;
        v[n++] = val;
        //Adaugarea mai multor valori in vector;
        int k = 0, i, vnou[100];
        int valoare, valu;
        cout << "adaugam numarul ..";
        cin >> valoare;
        cout << "dupa elementul ..";
        cin >> valu;
        for (i = 0; i < n; i++) {
            vnou[++k] = v[i];
            if (v[i] == valu)
                vnou[++k] = valoare;
        }
        n = k;
        for (i = 0; i < n; i++) v[i] = vnou[i];
        for (i = 1; i <= n; i++) cout << v[i];
        return 0;
    }