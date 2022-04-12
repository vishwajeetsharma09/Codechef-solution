#include <iostream>
using namespace std;
int find_index(int arr[],int k,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==k)return i+1;
    }
return -1;}
int main() {
	int tc;
	cin>>tc;
	while(tc-->0){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    int q;
	    cin>>q;
	    while(q-->0){
	        int k;
	        cin>>k;
	        int idx=find_index(arr,k,n);
	        int ans=1;
	        while(idx!=1&&idx!=-1){
	            idx=idx/2;
	            ans++;
	        }
	        if(idx==-1){
	            cout<<-1<<"\n";
	        }else{
	            cout<<ans<<"\n";
	        }
	    }
	}
	return 0;
}
