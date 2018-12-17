#include <iostream>
#include<string.h>


using namespace std;

int main()
{
  char s[] = "https://www.flickzee.com/search/mai hoon na"; //input string array

  char s2[100//empty array
  int j=0;
  int c=0;


  for(int i=0;i<strlen(s);i++) {
      if(s[i]==32) {
          c++;
          s2[j]='%';
          j++;
          s2[j]='2';
          j++;
          s2[j]='0';
      }
      else
          s2[j]=s[i];
      j++;
  }

  for(int i=0;i<strlen(s2);i++)
      cout<<s2[i];
}
