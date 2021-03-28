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
 * */

#include <bits/stdc++.h>
using namespace std;

int countPallindromes(string s)
{
	int n = s.size(), count = 0;
	bool dp[n][n] = {false};
	
	for(int gap = 0; gap < n; ++gap)
	{
		for(int i = 0; i < n-gap; ++i)
		{
			int j = i+gap;
			if(gap == 0)
				dp[i][j] = true;
			
			else if(gap == 1)
				dp[i][j] = s[i] == s[j];
			
			else
				dp[i][j] = s[i] == s[j] && dp[i+1][j-1];
			
			if(dp[i][j])
				count++;
		}
	}
	return count;
}

int main() 
{
	string s;
	cin >> s;
	cout << s << " : number of pallindromic substrings are " << countPallindromes(s) << endl;
	return 0;
}