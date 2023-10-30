//worked with Trevor Gross
#include <iostream>
#include <string>
#include <map>
using std::map;
using std::string;

string findTheDigits(string x, string y) {
    string nums = "";
    map<char, int> m;
    for (int i = 0; i < y.length(); i++) {
		if(m.find(y[i]) == m.end()) {
			m[y[i]] = 1;
		}
        else {
			m[y[i]]++;
		}
	}

    for (int j = 0; j < x.length(); j++) {
		if(m.find(x[j]) != m.end())
            m[x[j]]--;
    }

    for(auto it = m.begin(); it != m.end(); it++) {
        for(int k = 0; k < it->second; k++) {
			nums += it->first;
		}
	}

    return nums;
}