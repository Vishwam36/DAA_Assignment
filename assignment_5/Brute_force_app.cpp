/**
 * IIT2019234 - Kodi Pravallika
 * IIT2019235 - Vishwam Shriram Mundada
 * IIT2019236 - Noonsavath Samyukta Sravana
 * 
 * Question :
 * Given a string S, count the number of non-empty sub strings that are palindromes. 
 * A sub string is any continuous sequence of characters in the string. 
 * A string is said to be palindrome, if the reverse of the string is same as itself. 
 * Two sub strings are different if they occur at different positions in S. 
 * Solve using Dynamic programming.
 * 
 * Brute Force approach
 */

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int st, int end)
{
	int mid = (end-st+1)/2;
	for(int i = 0; i < mid; ++i)
		if(s[st+i] != s[end-i])
			return false;
	
	return true;
}

int countPalindromes(string s)
{
	int count = 0;
	
	for(int i = 0; i < s.size(); ++i)
		for(int j = i; j < s.size(); ++j)
			if(isPalindrome(s, i, j))
				count++;
	
	return count;
}

int main() 
{
	string s;
	cin >> s;
	cout << "number of non-empty sub strings that are palindromes for " << s << ": " << countPalindromes(s) << endl;
	return 0;
}