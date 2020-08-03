
#include <iostream>
using namespace std;
class Diagonal
{
    private:
        int *A;
        int n;
    public:
        Diagonal()
        {
            n=2;
            A=new int[2];
        }
        Diagonal(int n)
        {
            this->n=n;
            A=new int[n];
        }
        ~Diagonal()
        {
            delete []A;
        }
        void Set(int i,int j,int x);
        int Get(int i,int j);
        void Display();
        int GetDimension(){return n;}
};
void Diagonal::Set(int i,int j,int x)
{
    int c = j*(j-1)/2+i-1;
    if(i<=j || i>j)
    A[c]=x;
}
int Diagonal::Get(int i,int j)
{
    //int c = ((i*(i-1))/2+(j-1));
    int c = j*(j-1)/2+i-1;
    int e =  i*(i-1)/2+j-1;
    if(i<=j || i>j)
        return A[c];
    return A[e];
}
void Diagonal::Display()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            //int c = ((i*(i-1))/2+(j-1));
            int c = j*(j-1)/2+i-1;
            int e =  i*(i-1)/2+j-1;
            if(i<=j )
                    cout<<A[c]<<" ";
            else
                    cout<<A[e]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int d;
    cout<<"Enter Dimensions";
    cin>>d;
    Diagonal dm(d);
    int x;
    cout<<"Enter All Elements";
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=d;j++)
        {
            if(i<=j)
            {
                cin>>x;
                dm.Set(i,j,x);
            }
            else
            {

                dm.Set(i,j,x);
            }
        }
}
dm.Display();
return 0;
}
