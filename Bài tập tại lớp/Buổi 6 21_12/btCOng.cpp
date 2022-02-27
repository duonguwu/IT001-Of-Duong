#include <iostream>
#include <cmath>
using namespace std;
struct diem
{
double x;
double y;
};
void nhap(diem &s)
{
cout<<"nhap toa do x = ";
cin>>s.x;
cout<<"nhap toa do y = ";
cin>>s.y;
}
void xuat(diem &s)
{
cout<<"("<<s.x<<","<<s.y<<")";
}
double dodai(diem s)
{
double tong=sqrt(s.x*s.x+s.y*s.y);
return tong;
}
int main()
{
int n;
double f;
cout<<"nhap so luong diem = ";
cin>>n;
cout<<"nhap truc y = ";
cin>>f;
diem s[n];
for(int i=0;i<n;i++)
 nhap(s[i]);
int xa=0;
for(int i=1;i<n;i++)
 if(dodai(s[xa])<dodai(s[i]))
 xa=i;
cout<<"diem cach xa O nhat la : ";
xuat(s[xa]);
int gan=0;
for(int i=0;i<n;i++)
 if(dodai(s[gan])>dodai(s[i]))
 gan=i;
cout<<"\ndiem gan O nhat la : ";
 xuat(s[gan]);
cout<<endl;
for(int i=0;i<n;i++)
 if(s[i].y==f)
 {
 cout<<"diem nam tren truc y = "<<f<<" la : ";
 xuat(s[i]);
 cout<<endl;
 }
}