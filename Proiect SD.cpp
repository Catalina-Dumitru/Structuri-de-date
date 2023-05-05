#include <iostream>
#include <cstring>
using namespace std;
struct magazin
{
char nume_produs[32], marca_produs[32];
int an_fabricatie,pret;
}articol[100];
int i,n;

void afisare()
{
    int x,ok=0;
    cout<<"Tastati anul de fabricatie: ";
    cin>>x;
    for(i=0;i<n;i++)
        if(articol[i].an_fabricatie==x)
        {   ok=1;
            cout<<articol[i].nume_produs<<" ";
        cout<<endl;}
        if(ok==0) cout<<"nu exista articole din acel an"<<endl;
}
void modificare()
{
    int x,y;

    cout<<"introduceti numarul articolului"<<" ";

    cin>>x;
    cout<<endl;
    cout<<"introduceti noul pret"<<" ";
    cin>>y;
    articol[x].pret=y;
}
void sortare(){
    char i;
    int j,k;
    cout<<"tastati d pt descrescator si c pt crescator"<<endl;
    cin>>i;
    switch (i) {
    case 'd': { for(j=0;j<n-1;j++)
              for(k=j+1;k<n;k++)
                if(articol[j].pret<articol[k].pret)
            swap(articol[j],articol[k]);

    }  break;
    case 'c': {
    for(j=0;j<n-1;j++)
              for(k=j+1;k<n;k++)
                if(articol[j].pret>articol[k].pret)
            swap(articol[j],articol[k]);
    }break;

      }
      for(j=0;j<n;j++)
        cout<<articol[j].nume_produs<<endl;
}



int main()
{   int n1;int l;

    cout<<"introduceti numarul de articole:"<<endl;
    cin>>n1;
    if(n1<=0)
        cout<<"numarul introdus este gresit,va rugam sa introduceti un numar natural"<<endl;
    else{
    n=n1;
    for(i=0;i<n1;i++)
    {cout<<"numele articolului "<<i+1<<":"<<endl;
    cin>>articol[i].nume_produs;
    cout<<"marca articolului  "<<i+1<<":"<<endl;
    cin>>articol[i].marca_produs;
    cout<<"anul fabricatiei produsului  "<<i+1<<":"<<endl;
    cin>>articol[i].an_fabricatie;
    cout<<"pretul produsului  "<<i+1<<":"<<endl;
    cin>>articol[i].pret;}
}
    ok:
  cout<<endl;
  cout<<"scrieti 1 pt afisarea produselor fabricate intr-un anumit an ,2 pt sortare in functie de pret,3 pt modificarea pretului unui produs, 4 pt iesire";
  cin>>l;

  switch (l){
  case 1: afisare(); goto ok;break;
  case 2: sortare(); goto ok ;break;
    case 3 :modificare();goto ok;break;
    case 4: break;
  }

    return 0;
}
