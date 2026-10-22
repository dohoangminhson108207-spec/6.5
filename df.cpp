#include<bits/stdc++.h>
using namespace std;
class arri{
    private:
    float *a;
    int n;
    public:
    arri (){
        a = nullptr;
        n= 0;
    }
    void nhap(){
        cout <<"Nhap kich thuoc:";cin >> n;
        a = new float [n];
        for(int i = 0 ; i<n;i++){
            cout <<"Nhap gia tri thu "<<i+1<<":";cin >> a[i];
        }
    }
    void operator ++ (){
        for (int i = 0;i<n;i++){
            for (int j = 0;j<i;j++){
                if( a[i]<a[j]){
                    swap(a[i],a[j]);
                }
            }
        }
    }
    void operator -- (){
        for (int i = 0;i<n;i++){
            for (int j = 0;j<i;j++){
                if( a[i]>a[j]){
                    swap(a[i],a[j]);
                }
            }
        }
    }
    void xuat(){
        for (int i = 0 ;i < n; i++){
            cout <<a[i]<<" ";
        }
        cout <<endl;
    }
       ~arri(){
        delete[]a;
    }
};
int main(){
    arri a;
    a.nhap();
    a.xuat();
    ++a;
    a.xuat();