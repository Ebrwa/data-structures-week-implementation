#include <iostream>
using namespace std;

// Simple trie node for lowercase letters
struct TrieNode {
    TrieNode* next[26];
    bool isEnd;

    TrieNode() {
        isEnd = false;
        for (int i = 0; i < 26; ++i)
            next[i] = nullptr;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }
    void insert(string word) {
        TrieNode* node = root;
        for (char c : word) {
            int idx = c - 'a';
            if (!node->next[idx])
                node->next[idx] = new TrieNode();
            node = node->next[idx];
        }
        node->isEnd = true;
    }
    bool search(string word) {
        TrieNode* node = root;
        for (char c : word) {
            int idx = c - 'a';
            if (!node->next[idx])
                return false;
            node = node->next[idx];
        }
        return node->isEnd;
    }

    bool startsWith(string prefix) {
        TrieNode* node = root;
        for (char c : prefix) {
            int idx = c - 'a';
            if (!node->next[idx])
                return false;
            node = node->next[idx];
        }
        return true;
    }
};

int main() {
    Trie trie;
    trie.insert("code");
    trie.insert("coding");
    cout << trie.search("code") << endl;     // 1
    cout << trie.search("cod") << endl;      // 0
    cout << trie.startsWith("cod") << endl;  // 1

    return 0;
}
