 #include <iostream>
using namespace std;
void print(int A[],int n){
for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
}
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(A[i+j]<0){
                if(A[i+j]>A[j]&&A[j]<0){
                    int t=A[j];
                    A[j]=A[i+j];
                    A[i+j]=t;
                    print(A,n);
                    cout<<'\n';
                }
            }
            else if(A[i+j]>=0){
                if(A[i+j]<A[j]&&A[j]>=0){
                    int t=A[j];
                    A[j]=A[i+j];
                    A[i+j]=t;
                    print(A,n);
                    cout<<'\n';
                }
            }
        }
    }
 for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(A[i+j]<0){
                if(A[i+j]>A[j]&&A[j]<0){
                    int t=A[j];
                    A[j]=A[i+j];
                    A[i+j]=t;
                    print(A,n);
                    cout<<'\n';
                }
            }
            else if(A[i+j]>=0){
                if(A[i+j]<A[j]&&A[j]>=0){
                    int t=A[j];
                    A[j]=A[i+j];
                    A[i+j]=t;
                    print(A,n);
                    cout<<'\n';

                }
            }
        }
    }



}
