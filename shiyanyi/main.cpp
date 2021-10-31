/*this is test1
*this is test2
#include <iostream>
using namespace std;
class sqlist
{
private:
    int *elem;
    int length;//表的长度
public:
    sqlist(int n,int *e)
    {
        elem=new int[1000];
        for(int i=0;i<n;i++)
        {
            elem[i]=e[i];
        }
        length=n;
    }
    int listinsert(int i,int e)//i是位置而非下标
    {
        int k;
        if(i<1 || i>length+1)
            return -1;
        for(k=length-1;k>=i-1;k--)
        {
            elem[k+1]=elem[k];
        }
        elem[k+1]=e;
        length++;
        return 1;
    }
    int listdelete(int i)
    {
        int k;
        if(i<1 || i>length)
            return -1;
        for(k=i;k<length;k++)
        {
            elem[k-1]=elem[k];
        }
        length--;
        return 1;
    }
    int findlist(int i)
    {
        int k;
        if(i<1 || i>length)
            return -1;
        return elem[i-1];
    }
    void display()
    {
        cout<<length<<" ";
        for(int i=0;i<length;i++)
        {
            cout<<elem[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    int n,i;
    int data[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>data[i];
    }
    sqlist llist(n,data);
    llist.display();
    for(i=0; i<2; i++)
    {
        int index,e;
        cin>>index>>e;
        if(llist.listinsert(index,e)==-1)
            cout<<"error"<<endl;
        else
            llist.display();
    }
    for(i=0; i<2; i++)
    {
        int index;
        cin>>index;
        if(llist.listdelete(index)==-1)
            cout<<"error"<<endl;
        else
            llist.display();
    }
    for(i=0; i<2; i++)
    {
        int index;
        cin>>index;
        if(llist.findlist(index)==-1)
            cout<<"error"<<endl;
        else
            cout<<llist.findlist(index)<<endl;
    }
}*/
/*#include <iostream>
using namespace std;
class sqlist
{
private:
    int *elem;
    int length;//表的长度
public:
    sqlist(int n,int *e)
    {
        elem=new int[1000];
        for(int i=0;i<n;i++)
        {
            elem[i]=e[i];
        }
        length=n;
    }
    int listinsert(int i,int n,int e[])//i是位置而非下标
    {
        int k;
        if(i<1 || i>length+1)//
            return -1;

        for(k=length-1;k>=i-1;k--)
        {
            elem[k+3]=elem[k];
        }
        for(int m=0;m<n;m++)
        {
            elem[k+1+m]=e[m];
        }
        length+=n;
        return 1;
    }
    int listdelete(int i,int n)//连续删除的个数大于从index开始的剩余个数呢？
    {
        int k;
        if(i<1 || i>length)//
            return -1;
        for(k=i;k<=length-n;k++)
        {
            elem[k-1]=elem[k+n-1];
        }
        length-=n;
        return 1;
    }
    void display()
    {
        cout<<length<<" ";
        for(int i=0;i<length;i++)
        {
            cout<<elem[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    int n,i;
    int data[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>data[i];
    }
    sqlist llist(n,data);
    llist.display();

    int e[1000];
    int nn,index;
    cin>>index>>nn;
    for(i=0;i<nn;i++)
    {
        cin>>e[i];
    }
    llist.listinsert(index,nn,e);
    llist.display();
    cin>>index>>nn;
    llist.listdelete(index,nn);
    llist.display();
}
*/
/*#include <iostream>
using namespace std;
class sqlist
{
private:
    int *elem;
    int length;//表的长度
public:
    sqlist(int n)
    {
        elem=new int[1000];
        length=n;
    }
    sqlist(int n,int *e)
    {
        elem=new int[1000];
        for(int i=0;i<n;i++)
        {
            elem[i]=e[i];
        }
        length=n;
    }
    void hebing(sqlist a,sqlist b)
    {
        int *p;
        int *q;
        length=a.length+b.length;
        int n=0,m=0,i=0;
        while(n<a.length && m<b.length)
        {
            if(a.elem[n]<b.elem[m])
            {
                elem[i]=a.elem[n];
                n++;
            }
            else
            {
                elem[i]=b.elem[m];
                m++;
            }
            i++;
        }
        //cout<<"m="<<m<<endl;
       // cout<<"n="<<n<<endl;
        if(m<b.length)
        {
            for(int k=i;k<length;k++)
            {
                elem[k]=b.elem[m];
                m++;
            }
        }

        if(n<a.length)
        {
            for(int k=i;k<length;k++)
            {
                elem[k]=a.elem[n];
                n++;
            }
        }

    }
    void display()
    {
        cout<<length<<" ";
        for(int i=0;i<length;i++)
        {
            cout<<elem[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    int n1,n2,i;
    int data1[1000],data2[1000];
    cin>>n1;
    for(i=0;i<n1;i++)
    {
        cin>>data1[i];
    }
    sqlist llist1(n1,data1);
    cin>>n2;
    for(i=0;i<n2;i++)
    {
        cin>>data2[i];
    }
    sqlist llist2(n2,data2);
    sqlist llist3(n1+n2);
    llist3.hebing(llist1,llist2);
    llist3.display();
}
*/
/*#include <iostream>
using namespace std;
class sqlist
{
private:
    int *elem;
    int length;//表的长度
public:
    sqlist(int n,int *e)
    {
        elem=new int[1000];
        for(int i=0;i<n;i++)
        {
            elem[i]=e[i];
        }
        length=n;
    }
    //左移
    void rightround(int n)
    {
        for(int k=0; k<n; k++)
        {
            int a=elem[length-1];
            for(int i=length-2; i>=0; i--)
            {
                elem[i+1]=elem[i];
            }
            elem[0]=a;
        }
    }
    //右移
    void leftround(int n)
    {
        for(int k=0; k<n; k++)
        {
            int a=elem[0];
            for(int i=0; i<length; i++)
            {
                elem[i]=elem[i+1];
            }
            elem[length-1]=a;
        }
    }
    void display()
    {
        for(int i=0;i<length;i++)
        {
            cout<<elem[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    int n,i,f;
    int data[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>data[i];
    }
    sqlist llist(n,data);
    llist.display();
    int weishu;
    cin>>f;
    cin>>weishu;
    if(f==0)
        llist.leftround(weishu);
    else
        llist.rightround(weishu);
    llist.display();
    cin>>f;
    cin>>weishu;
    if(f==0)
        llist.leftround(weishu);
    else
        llist.rightround(weishu);
    llist.display();
}
*//*
#include <bits/stdc++.h>
using namespace std;
class gupiaosqlist
{
private:
    int length;
    int m;
    string *elem;
public:
    gupiaosqlist(int n,int mval,string *e)
    {
        length=n;
        m=mval;
        elem=new string[1000];
        for(int i=0;i<n;i++)
        {
            elem[i]=e[i];
        }
    }
    void findopen()
    {
        for(int i=0; i<length; i++)
        {
            if(elem[i].find("open")==string::npos)//shanchu
            {
                for(int k=i-1; k<length; k++)
                {
                    elem[k-1]=elem[k];
                }
                length--;
            }
        }
    }
    void display()
    {
        for(int i=0;i<length;i++)
        {
            cout<<elem[i]<<endl;
        }
    }
};
int main()
{
    int n,m,i;
    string data[1000];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>data[i];
    }
    gupiaosqlist llist(n,m,data);
    llist.findopen();
    llist.display();
}*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class stock{
public:
    string date;
    int days;
    string type;
    int s1;
    int s2;
    stock(){
        days=0;
    }
};

bool Compare(stock a,stock b){
    return a.days<b.days;
}

class stockbox{//完成输入数据及进行分类
private:
    stock open[1000]; //两个分类
    stock closed[1000];
    int num;
    int open_num;
    int closed_num;
    int M;
public:
    stockbox(int _num,int _M){//构造函数
        string _date,_type;
        int _s1,_s2,i;
        num=_num;
        M=_M;
        open_num=0;
        closed_num=0;
        //分出两个类别 
        for(i=0;i<num;i++){
            cin>>_date>>_type>>_s1>>_s2;//在构造函数中cin
            if(_type=="open"){//所有的数据项一一赋值
                open[open_num].date=_date;
                open[open_num].type=_type;
                open[open_num].s1=_s1;
                open[open_num].s2=_s2;
                open[open_num].days=Transfrom_date(_date);
                open_num++;//数量加一
            }
            else{
                closed[closed_num].date=_date;
                closed[closed_num].type=_type;
                closed[closed_num].s1=_s1;
                closed[closed_num].s2=_s2;
                closed[closed_num].days=Transfrom_date(_date);
                closed_num++;
            }
        }
    }

    int Transfrom_date(string s){//转日期为天数
        int i,year,month,day,tmp1,tmp2,tmp3,days=0;
        string syear,smonth,sday;
        tmp1=s.find('/',0);
        syear=s.substr(0,tmp1);
        tmp2=s.find('/',tmp1+1);
        smonth=s.substr(tmp1+1,tmp2-tmp1-1);
        tmp3=s.find('/',tmp2+1);
        sday=s.substr(tmp2+1,tmp3-tmp2-1);
        year=(syear[0]-48)*1000+(syear[1]-48)*100+(syear[2]-48)*10+(syear[3]-48);
        if(smonth.size()==2)
            month=(smonth[0]-48)*10+(smonth[1]-48);
        else
            month=smonth[0]-48;
        if(sday.size()==2)
            day=(sday[0]-48)*10+(sday[1]-48);
        else
            day=sday[0]-48;

        //year
        for(i=1;i<year;i++){
            if((i%4==0 && i%100!=0) || (i%400 == 0))
                days+=366;
            else
                days+=365;
        }

        //month
        for(i=1;i<month;i++){
            switch(i){
                case 1:
                    days+=31;
                    break;
                case 2:
                    if((year%4==0 && year%100!=0) || (year%400 == 0))
                        days+=28;
                    else
                        days+=29;
                case 3:
                    days+=31;
                    break;
                case 4:
                    days+=30;
                    break;
                case 5:
                    days+=31;
                    break;
                case 6:
                    days+=30;
                    break;
                case 7:
                    days+=31;
                    break;
                case 8:
                    days+=31;
                    break;
                case 9:
                    days+=30;
                    break;
                case 10:
                    days+=31;
                    break;
                case 11:
                    days+=30;
                    break;
                case 12:
                    days+=31;
                    break;
            }
        }

        //day
        days+=day;
        return days;
    }

    void display(){
        int i,j,tmp1,tmp2;
        sort(open,open+open_num,Compare);
        sort(closed,closed+closed_num,Compare);//从小到大排序

        for(i=M-1;i<open_num;i++){ //计算出结果 open的 取掉没有m-1天之前记录的只需控制开始
            tmp1=0;
            tmp2=0;
            for(j=i-M+1;j<=i;j++){//从最近M-1天开始加到i
                tmp1+=open[j].s1;
                tmp2+=open[j].s2;
            }
            tmp1=tmp1/M;
            tmp2=tmp2/M;
            cout<<open[i].date<<" "<<open[i].type<<" "<<tmp1<<" "<<tmp2<<endl;
        }

        for(i=M-1;i<closed_num;i++){//close的 复制一下
            tmp1=0;
            tmp2=0;
            for(j=i-M+1;j<=i;j++){
                tmp1+=closed[j].s1;
                tmp2+=closed[j].s2;
            }
            tmp1=tmp1/M;
            tmp2=tmp2/M;
            cout<<closed[i].date<<" "<<closed[i].type<<" "<<tmp1<<" "<<tmp2<<endl;
        }
    }
};

int main(){

    int N,M;
    cin >> N >> M;
    while(N--){
        stockbox sbox(N, M);
        sbox.display();
    }
    //while(cin>>N>>M){
      //  stockbox sbox(N,M);
     //   sbox.display();
    //}

    return 0;
}
