#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void palindrom(string S){
    {
	    int st=0;
	    int e=S.length()-1;
	    int ans;
	    while(st<e){
	        swap(S[st++],S[e--]);
	        ans=S;
	    }
	    if(S==ans){
	        return 0;
	    }else return 1;
	}
}
void reverse(char name[],int n){
int s=0;
int e=n-1;
while(s<e){
    swap(name[s++],name[e--]);

}
}
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main() {
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
   int k=getLength(name);

    cout<<"Your name is"<<" ";
    cout<<name<<endl;

     reverse(name,k);
     cout<< name;

     


  return 0;
}