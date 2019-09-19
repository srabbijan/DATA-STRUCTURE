#include <bits/stdc++.h>
using namespace std;

struct T {
    int sum;
    T *path[26];

    T() {
        sum = 0;
        for (int i = 0; i < 26; i++) {
            path[i] = NULL;
        }
    }
};

void insert(string s, T *root) {
    T *node = root;

        for (int i = 0; s[i]; i++) {
        int next = s[i] - 'a';
        if (node -> path[next] == NULL) {
            node -> path[next] = new T();
        }
        node = node -> path[next];
        node -> sum++;
    }
}

int Count(string s, T *root) {
    T *node = root;

    for (int i = 0; s[i]; i++) {
        int next = s[i] - 'a';
        if (node -> path[next] == NULL) {
            return 0;
        }
        node = node -> path[next];
    }
    return node -> sum;
}

int main() {

    T *root = new T();
    int n ,q;
    scanf("%d %d",&n,&q);

    while (n--) {
        string s; cin >> s;
        insert(s, root);
    }
    while (q--) {
        string s; cin >> s;
        cout << Count(s, root) << endl;
    }
}
