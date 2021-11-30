/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mohammed Almeaither
 */

#include<iostream>
#include <vector>
#include<string>
using namespace std;
class Name_value{
    string s;
    int a;
public:
    void set(string str, int aa){
        s = str;
        a = aa;
    }
    void put(){
        cout<<s<<a;
    }
};
int main()
{
    Name_value nv;
    string name;
    int a;
    vector<Name_value> name_value;

    while(name!="NoName")
    {

        cout<<"Enter name and vlaue: ";
        cin>>name>>a;
        if(name!="NoName")
        {
            nv.set(name,a);
            name_value.push_back(nv);
        }

    }

    cout<<name_value.size()<<endl;
    for(int i=0;i < name_value.size();i++)
    {
        name_value[i].put();
    }



    return 0;
}