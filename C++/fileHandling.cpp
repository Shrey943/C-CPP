#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string str;

    // cin >> str; // Only inputs first word(till first whitespace)
    // cout << str << endl;

    // getline(cin, str); // inputs a whole line(till first line brake)

    // cout << str << endl;

    ofstream kuchBhiNaamDoRe("fileTesting.txt"); // Yaad kr le baba, ofstream use hota h write karne
    kuchBhiNaamDoRe << "Mera naam chin chin chin\n";
    kuchBhiNaamDoRe << "chin chin chin BABA\n";
    kuchBhiNaamDoRe << "chin chin chin\n";

    kuchBhiNaamDoRe.close();

    ifstream out;

    out.open("fileTesting.txt");
    out >> str; // First word isne yaha read kr liya ab next time jb bhi read karega toh 2nd word se karega.
    cout << str << endl;
    while (out.eof() == 0)
    {
        getline(out, str);
        cout << str;
    }
    out.close();
    return 0;
}