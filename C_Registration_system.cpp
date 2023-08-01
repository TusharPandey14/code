#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

string generateUniqueName(const string& name, unordered_set<string>& nameSet) {
    string uniqueName = name;
    int suffix = 1;
    while (nameSet.find(uniqueName) != nameSet.end()) {
        uniqueName = name + to_string(suffix);
        ++suffix;
    }
    nameSet.insert(uniqueName);
    return uniqueName;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character after n

    unordered_set<string> nameSet;

    for (int i = 0; i < n; ++i) {
        string name;
        getline(cin, name);

        if (nameSet.find(name) == nameSet.end()) {
            // Name doesn't exist in the database, register it
            nameSet.insert(name);
            cout << "OK" << endl;
        } else {
            // Name already exists, generate a unique name and register it
            string uniqueName = generateUniqueName(name, nameSet);
            cout << uniqueName << endl;
        }
    }

    return 0;
}

/*int overflow , array bounds  special cases (n=1?) 
 do smth instead of nothing !
 WRITE STUFF DOWN DON'T GET STUCK ON ONE APPROACH*/