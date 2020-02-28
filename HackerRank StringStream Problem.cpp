#include<bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
	vector <int> vec;
	int temp;
	char ch;
	while(ss>>temp)
    {
        vec.push_back(temp);
        ss>>ch;
    }
    return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
	vector <int> vec;
	int temp;
	char ch;
	while(ss>>temp)
    {
        vec.push_back(temp);
        ss>>ch;
    }
    return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

