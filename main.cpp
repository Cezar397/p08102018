#include <iostream>

using namespace std;

struct timp
{
    int m, o;
};

void citire(int a[21], int &n, int &T)
{
    cin>>n;

    timp x;

    for(int i=1;i<=n;i++)
    {
        cin>>x.o>>x.m;
        a[i] = x.o * 60 + x.m;
    }

    cin>>x.o>>x.m;

    T = x.o * 60 + x.m;
}

void sortare(int a[21], int n)
{
    int aux, i, j;

    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
        if(a[i] < a[j])
    {
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;
    }
}

int main()
{
    int n, nr=0, T;
    int a[21];
    citire(a, n, T);
    sortare(a, n);

    int i = 0;

    while(i<=n && T>=a[i])
    {
        nr++;
        T=T-a[i];
        i++;
    }

    cout<<nr;
}
