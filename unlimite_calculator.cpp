#include<iostream>
#include<String>
#include <algorithm>

using namespace std;

int main(void){
    //define the variable;
    int NUM=1000;//this number can be changed
    int carry=0;
    string num1_c;
    string num2_c;
    int num1_i[NUM];
    int num2_i[NUM];
    int ans[NUM];
    int len_1,len_2;


    // initialization;
    for (int i = 0; i <=NUM ; i++)
    {
        num1_i[i]=0;
        num2_i[i]=0;
        ans[i]=0;
    }

    cout<<"well come to use the big number calculator";
    cout<<"Please enter first number"<<endl;
    cin>>num1_c;
    cout<<"Please enter Second number"<<endl;
    cin>>num2_c;


    //reverse the string

    len_1=num1_c.size();//the array's length
    len_2=num2_c.size();//the array's length
    reverse(num1_c.begin(),num1_c.end());
    reverse(num2_c.begin(),num2_c.end());

    //Check point after reverse the array
    cout<<"check point 1: reverse string"<<endl;
    cout<<num1_c<<endl;
    cout<<num2_c<<endl;

    for (int i = 0; i<=len_1; i++ ) {
        if (num1_c[i]=='\0')//skip the end of string
        {
            break;
        }
        num1_i[i] = num1_c[i]-'0';//convert string to int ( 0's ascii code is 48 )
    }
    for (int i = 0; i<=len_2; i++ ) {
        if (num2_c[i]=='\0'){//skip the end of string
            break;
        }
        num2_i[i] = num2_c[i]-'0';//convert string to int( 0's ascii code is 48 )
    }
    
    
    //Check point
    cout<<"check point 2: convert string to int array"<<endl;

    for (int i=0; i<=NUM ;i++)
    {
        if (num1_i[i]==0)
        {
            break;
        }
        
        cout<<num1_i[i];
    }
    cout<<endl;
    for (int i=0; i<=NUM ;i++)
    {
        if (num1_i[i]==0)
        {
            break;
        }
        cout<<num2_i[i];    
    }


    //plus the number
    for(int i=0;i<=NUM;i++){
        ans[i]=num1_i[i]+num2_i[i]+carry;//add two number and carry
        if(ans[i]>=10){//if need carry
            ans[i]-=10;
            carry=1;
        }
        else carry=0;
    }

    //output
    int not_zero=0;
    //print the ans
    cout<<endl<<"the ans is:";
    for (int i=NUM-1 ;i>=0;i--)//reserve the string and output
    {
        // cout<<ans[i];
        if (ans[i]!=0)//skip the zero(un-use)
        {   
            not_zero+=1;
            cout<<ans[i];
        }
        else if (ans[i]==0 && not_zero>=1)//Don't skip the 0 whick is useful
        {
            cout<<ans[i];
        }
    }


    
    return 0;
}
