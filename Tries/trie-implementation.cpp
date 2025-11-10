#include <bits/stdc++.h>
using namespace std;

// -------------------- TrieNode Definition --------------------
class TrieNode {
public:
    TrieNode* children[26];
    bool flg;

    TrieNode() {
        flg = false;
        for (int i = 0; i < 26; i++)
            children[i] = NULL;
    }

    bool containsKey(char c) {
        return children[c - 'a'] != NULL;
    }

    void put(char c, TrieNode* node) {
        children[c - 'a'] = node;
    }

    TrieNode* get(char c) {
        return children[c - 'a'];
    }

    void setEnd() {
        flg = true;  // ✅ should be true
    }

    bool isEnd() {
        return flg;
    }
};

// -------------------- Trie Definition --------------------
class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    // Insert a word into the Trie
    void insert(string word) {
        TrieNode* curr = root;
        for (char c : word) {
            if (!curr->containsKey(c)) {
                curr->put(c, new TrieNode());
            }
            curr = curr->get(c);
        }
        curr->setEnd();  // ✅ mark end of word
    }

    // Search for a complete word
    bool search(string word) {
        TrieNode* curr = root;
        for (char c : word) {
            if (!curr->containsKey(c)) {
                return false;
            }
            curr = curr->get(c);
        }
        return curr->isEnd();
    }

    // Check if any word starts with the given prefix
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for (char c : prefix) {  // ✅ was "word" before
            if (!curr->containsKey(c)) {
                return false;
            }
            curr = curr->get(c);
        }
        return true;
    }
};

// -------------------- Main Function --------------------
int main() {
    Trie* obj = new Trie();
    obj->insert("apple");
    obj->insert("app");
    obj->insert("bat");

    cout << boolalpha; // print true/false instead of 1/0

    cout << "Search apple: " << obj->search("apple") << endl;   // true
    cout << "Search app: " << obj->search("app") << endl;       // true
    cout << "Search batman: " << obj->search("batman") << endl; // false
    cout << "StartsWith ap: " << obj->startsWith("ap") << endl; // true
    cout << "StartsWith cat: " << obj->startsWith("cat") << endl; // false

    delete obj;
    return 0;
}
