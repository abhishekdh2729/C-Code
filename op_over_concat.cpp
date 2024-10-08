#include<iostream>
#include<string.h>
using namespace std;

class addString
{
    private:
    char string1[20],string2[20];
    public:
    void operator +()
    {
        cout<<"After concatenation: "<<strcat(string1,string2);
    }
    addString(char* str1,char* str2)
    {
        strcpy(string1,str1);
        strcpy(string2,str2);
    }
};

int main()
{
    //addString obj;
    //strcpy(obj.string1,"Prep");
    //strcpy(obj.string2,"Insta");
    
    char str1[20]="Abhi";
    char str2[20]="shek";
    addString obj(str1,str2);
    +obj;

}