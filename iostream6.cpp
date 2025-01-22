#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
    fstream fh;int h,m,s;
    fh.open("file2.txt",ios::out|ios::binary);
    if(!fh.is_open())
    {
        cout<<"Cannot open file\n";
        exit(1);
    }
    cin>>h>>m>>s;
    fh.write((char *)&h,sizeof(int));
    fh.write((char *)&m,sizeof(int));
    fh.write((char *)&s,sizeof(int));
    fh.close();
    fh.open("file3.txt",ios::in);
    int h1,m1,s1;
    fh.read((char *)&h1,sizeof(int));
    fh.read((char *)&m1,sizeof(int));
    fh.read((char *)&s1,sizeof(int));
    cout<<h1<<":"<<m1<<":"<<s1<<endl;
    fh.close();
}