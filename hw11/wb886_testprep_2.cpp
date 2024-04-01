#include <iostream>
#include <string>

using namespace std;

int countConstants(string S, int length)
{
    if(length <= 0) return 0;
    if(
        !(S[length] == 'A' || S[length] == 'E' || S[length] == 'I' 
        || S[length] == 'O' || S[length] == 'U' || S[length] == 'a' 
        || S[length] == 'e' || S[length] == 'i' || S[length] == 'o' 
        || S[length] == 'u') && !(S[length] >= '0' || S[length] <= '9')
        ){
            return 1 + countConstants(S, length -1);
    } else {
        return countConstants(S, length -1);
    }
}

int main()
{
    string s;
    int count;
    cout<<"Enter string: "<<endl;
    cin>>s;
    
    count = countConstants(s, s.length());
    cout<<"Number of Constants is "<<count<<endl;

}