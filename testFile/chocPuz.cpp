#include<iostream>

using namespace std;

int main()
{
    int r;
    cout<<"Enter the amount:"<<endl;
    cin>>r;
    int ch,ch2=0,ch3=0,wr;
    wr=ch=r;//15

    while(wr>=3){//15 5 3
        ch2=wr/3;//5 1 1
        wr=wr%3;//0 2 0
        wr+=ch2;//5 3 1
        ch3+=ch2;//5+1=6+1=7
        ch2=0;//
    }
    ch+=ch3;
    cout<<ch;
    return 0;
}
