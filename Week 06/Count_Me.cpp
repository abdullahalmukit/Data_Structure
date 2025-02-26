#include <bits/stdc++.h>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence); // সেন্টেন্স ইনপুট নেবো

    map<string, int> wordCount; // শব্দের কাউন্ট রাখার জন্য মাপ
    stringstream ss(sentence); // সেন্টেন্সকে স্ট্রিং স্ট্রিমে পরিবর্তন করছি
    string word;
    vector<string> words; // শব্দগুলোর তালিকা রাখবো যাতে প্রথম আগমনটা ট্র্যাক করতে পারি

    // প্রতিটি শব্দকে কাউন্ট করা হচ্ছে
    while (ss >> word) {
        wordCount[word]++;
        words.push_back(word); // প্রথম আগমন ট্র্যাক করতে তালিকায় যোগ করছি
    }

    // এখন সবচেয়ে বেশি বার আসা শব্দ খুঁজবো
    string resultWord;
    int maxCount = 0;
    
    // যেই শব্দ প্রথম আসবে সেটি আমরা বের করব
    for (auto &w : words) {
        if (wordCount[w] > maxCount) {
            resultWord = w;
            maxCount = wordCount[w];
        }
    }

    // ফলাফল আউটপুট করবো
    cout << resultWord << " " << maxCount << endl;

    return 0;
}
