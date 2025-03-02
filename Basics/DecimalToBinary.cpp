#include <bits/stdc++.h>
using namespace std;

int main() {
	int no = 10;
	
	int pv=1;
	int sum=0;
	int rem=0;
	
	for(; no>0; no=no/2)
	{
	    if(no % 2 == 0){
	        rem=0;
	    }
	    else{
	        rem=1;
	    }
	    
	    sum=sum+(rem*pv);
	    
	    pv=pv*10;
	}
	
	
	cout<<sum;

}
