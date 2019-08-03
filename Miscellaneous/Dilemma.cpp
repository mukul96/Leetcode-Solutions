#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int count1=0,count0=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                count1++;
            }
            else{
                count0++;
            }
        }
        if((count1%2!=0 && count0%2!=0) || ((count1%2!=0 && count0%2==0))){
            cout<<"WIN"<<endl;
        }
        if((count1%2==0 && count0%2==0) || ((count1%2==0 && count0%2!=0))){
            cout<<"LOSE"<<endl;
        }
    }
    return 0;
}

