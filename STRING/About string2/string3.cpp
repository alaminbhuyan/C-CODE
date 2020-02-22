#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{


        string str;
        cout<<"Enter your hour:minute:second like this format: ";
        cin>>str;
        int a,b;
        a = str[0],b=str[1];
        if((str[8]=='P')|| (str[7]=='P'))
        {
            if((a==49)&&(b==50))
            {
                for(int  i=0; i<str.size()-2; i++)
                {
                    cout<<str[i];
                }
            }
            else if((a==49)&&(b==49))
            {
                cout<<"23";
                for(int  i=2; i<str.size()-2; i++)
                {
                    cout<<str[i];
                }
            }
            else if((a==49)&&(b==48))
            {
                cout<<"22";
                for(int  i=2; i<str.size()-2; i++)
                {
                    cout<<str[i];
                }
            }
            else if((a>=49)&&(a<=57))
            {
                stringstream ss;
                ss<<str[0];
                int c;
                ss>>c;
                c=c+12;
                cout<<c;
                for(int i=1; i<str.size()-2; i++)
                {
                    cout<<str[i];
                }
            }
            else if((a==48)&&((b>=49)&&(b<=57)))

        {
            stringstream ss;
            ss<<str[1];
                int c;
                ss>>c;
                c=c+12;
                cout<<c;
                for(int i=2; i<str.size()-2; i++)
                {
                    cout<<str[i];
                }
            }
        }
        /////////////////////////////////////////////
        if((str[8]=='A')|| (str[7]=='A'))
        {
            if((a==49)&&(b==50))
            {
                cout<<"00";
                for(int  i=2; i<str.size()-2; i++)
                {
                    cout<<str[i];
                }
            }
            else if((a||b>=49)&&(a||b<=57))
            {
                for(int i=0; i<str.size()-2; i++)
                {
                    cout<<str[i];
                }
            }
        }


}
