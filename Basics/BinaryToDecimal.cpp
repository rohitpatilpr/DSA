#include <bits/stdc++.h>
using namespace std;

int main() {
	int bin = 1101;
	
	int sum=0;
	int pos=1;
	
	for(; bin>0; bin=bin/10)
	{
	    int lastdigit= bin%10;
	    sum=sum+(lastdigit*pos);
	    pos=pos*2;
	}
	
	cout<<sum;

}
