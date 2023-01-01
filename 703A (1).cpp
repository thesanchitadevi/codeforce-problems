#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m,c;
    int M=0,C=0,draw=0;
    while(n--)
    {
        cin>>m>>c;

        if(m>c)
            M++;
        else if(m<c)
            C++;
        else if(m==c)
            draw++;
    }
    if(draw==n || M==C)
        cout<<"Friendship is magic!^^";
    else if(M>C)
        cout<<"Mishka";
    else
        cout<<"Chris";

    cout<<endl;
    return 0;
}