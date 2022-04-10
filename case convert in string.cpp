#include<iostream>

using namespace std;




int main()

{ // Tack variable string

    string s;

// this function ignore all white space or buffer

getline(cin>>ws,s);

// .length calculate length of string and i store in y variable

  int y=s.length();

for (int i=0; i<y; i++)

{

//check s[i] is uppercase or lowercase

if(s[i]>='a' && s[i]<='z')

    {

        s[i]=s[i]-32; //if it is lowercase sub by 32 to convent into uppercase

    }

    else

    {

        s[i]=s[i]+32;// if it is  uppercase add by 32 to convent into lowercase

    }

}

cout<<s<<endl;

return 0;

}

