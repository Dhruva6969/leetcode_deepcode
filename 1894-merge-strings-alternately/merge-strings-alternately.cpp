class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string merge="";
        while (i<word1.size() && j<word2.size()){
            merge+=word1[i];
            i++;
            merge+=word2[j];
            j++;
        }
        while(i<word1.size()){
            merge+=word1[i];
            i++;
        }
        while(j<word2.size()){
            merge+=word2[j];
            j++;
        }
        return merge;

    }
};