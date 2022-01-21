//53_IT_Vendra
//WAP to transpose a matrix.
#include<iostream>
#include<conio.h>
using namespace std;
class Matrix
{
int a[5][5];
int row,col;
public: Matrix(int x,int y)
{
row=x;
col=y;
}
void read();
void display();
void transpose();
};
void Matrix::read()
{
cout << "\nEnter elements of matrix:\n";
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++) cin>>a[i][j];
}
}
void Matrix::display()
{
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
cout<<a[i][j]<< " ";
cout<<"\n";
}
}
void Matrix::transpose()
{
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
cout<<a[j][i]<<" ";
cout<<"\n";
}
}

main()
{
int m,n;
cout<<"Enter the number of rows: "; cin>>m;
cout<<"Enter the number of columns: "; cin>>n;
Matrix obj1(m,n);
obj1.read();
cout<<"\nMatrix is :\n";
obj1.display();
cout<<"\nTranspose of matrix is :\n";
obj1.transpose();
}
