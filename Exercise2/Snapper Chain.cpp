# include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int m=1;m<=T;m++)
	{
		int N;
		long long K;
		cin>>N>>K;
		int temp=pow(2,N);
		int g=temp-1;
		bool done=false;
		for(int i=0;i<=N;i++)
		{
			if(K>=g && (K-g)%temp==0)
			{
				done=true;
			}
		}
		cout<<"Case #"<<m<<": ";
		if(done) cout<<"ON";
		else cout<<"OFF";
		cout<<endl;
	}
	return 0;
}
