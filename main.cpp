#include <iostream>
#include <ctime>
//程式說明
//開啟程式取得系統時間
//輸入1則時間+1
//輸入0結束程式
using namespace std;
class tim{
public:
    void timer(){
    cout<<"system time:\n";

    cout.fill('0'); cout.width(2); cout<<h<<":";
    cout.fill('0'); cout.width(2); cout<<m<<":";
    cout.fill('0'); cout.width(2); cout<<s<<endl;
    };
    void tick(){
        s=s+1;
        if(s==60){
            s=s-60;
            m=m+1;
            if(m==60){
                m=m-60;
                h=h+1;
                if(h==24)
                    h=h-24;
            }
        }
        cout<<"tick time:\n";
        cout<<h<<":";
        cout<<m<<":";
        cout<<s<<endl;
    };
private:
    time_t t1 = time(NULL);
    struct tm *nPtr = localtime(&t1);
    int h = nPtr->tm_hour;
    int m = nPtr->tm_min ;
    int s = nPtr->tm_sec;
};

int main()
{
    tim nowtime;
    nowtime.timer();
    int B;
    cout<<" 輸入1增加一秒(0結束):";
    cin>>B;
    while(B!=0){
        while(B!=1&&B!=0){
            cout<<"無效輸入\n";
            cout<<" 輸入1增加一秒(0結束):";
            cin>>B;
        }
        while(B==0){
                return 0;
        }
    nowtime.tick();
    cout<<" 輸入1增加一秒(0結束):";
    cin>>B;
    }
    return 0;
}
