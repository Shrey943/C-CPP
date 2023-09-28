# include <iostream>
# include <string>

using namespace std;

int main()
{
    string strArr[5] = {"a", "b", "c", "d", "e"};
    string *strArr2 = strArr;
    // cout<< *strArr2;




    
    for(int i = 0; i < strArr2->size(); i++){
        cout<< *strArr2[i];
        strArr2++;
    }

    return 0;
}