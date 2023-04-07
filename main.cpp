#include <iostream>

using namespace std;

int main()
{
int n,v[100];
cout<<"Numarul de elememnte din vector";cin>>n;
for(int i=0;i<n;i++)
{

cout<<"Elementul de pe pozitia"<<i<<" ";
cin>>v[i];
}
int c,ins;
cout<<"Adauga un numar pe pozitia:";cin>>c;
cout<<"Adauga numarul1:";cin>>ins;
if(c<n)
{
    n++;
    for(int i=n-1;i>=c;i--)
        v[i]=v[i-1];
    v[c]=ins;
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
}
else if(c==n)
{
    v[n]=ins;
    n++;
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";


}
else
 {
     for(int i=n;i<c;i++)
        v[i]=0;
     v[c]=ins;
     n=c+1;
     for(int i=0;i<n;i++)
        cout<<v[i]<<" ";

}
}



