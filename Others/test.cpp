bool isPalindrome(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}