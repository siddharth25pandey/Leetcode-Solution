struct TrieNode {
    TrieNode* children[26] = {};
    string* word;
    void addWord(string& word) {
        TrieNode* cur = this;
        for (char c : word) {
            c -= 'a';
            if (!cur->children[c]) cur->children[c] = new TrieNode();
            cur = cur->children[c];
        }
        cur->word = &word;
    }
};

class Solution {
public:
    int m, n;
    int arr[5] = {0, 1, 0, -1, 0};
    vector<string> ans;
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        m = board.size(); n = board[0].size();
        TrieNode trieNode;
        for (string& word : words) trieNode.addWord(word);
        
        for (int r = 0; r < m; ++r)
            for (int c = 0; c < n; ++c)
                dfs(board, r, c, &trieNode);
        return ans;
    }
    void dfs(vector<vector<char>>& board, int r, int c, TrieNode* cur) {
        if (r < 0 or r >= m or c < 0 or c >= n or board[r][c] == '.' or !cur->children[board[r][c]-'a']) return;
        char temp = board[r][c];
        cur = cur->children[temp - 'a'];
        if (cur->word != nullptr) {
            ans.push_back(*cur->word);
            cur->word = NULL; // Avoid duplication!
        }
        board[r][c] = '.'; // mark as visited!
        for (int i = 0; i < 4; ++i) dfs(board, r + arr[i], c + arr[i+1], cur);
        board[r][c] = temp; // restore org state
    }
};