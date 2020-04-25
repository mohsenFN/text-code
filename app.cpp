#include <iostream>
#include <fstream>
using namespace std;

string code_text(string uip) // uip ==> user input
        {
                string crypted_t = uip;
                for (int i = 0;i <= uip.size(); i++){crypted_t[i] = crypted_t[i] + 2;}
                return crypted_t;
        }

string decode_text(string uip)
        {
                string decrypt_t = uip;
                for (int i =0;i <= uip.size(); i++){decrypt_t[i] = decrypt_t[i] - 2;}
                return decrypt_t;
        }


int main()
	{
		string file_name, content;int ec;
		cout << "File : "; cin >> file_name;
		cout << "[1] code | [2] decode: "; cin >> ec;
		// reading file ...
		ifstream File(file_name);
		if (!File)
			{
				cout << "Unable to open file." << endl;
				exit(0);
			}
		switch(ec)
			{
				case 1:
					while (getline(File, content))
						{
							cout << code_text(content);
						}
					cout << endl;
				case 2:
					while(getline(File, content))
						{
						cout << decode_text(content);
						}
					cout << endl;
			}
	}
