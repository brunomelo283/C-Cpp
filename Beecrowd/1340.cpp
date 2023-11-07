#include<iostream>
#include<stack>
#include<queue>
using namespace std;




int main(void){
	int c, op, x;
	
	stack<int> p;
	queue<int> f;
	priority_queue<int> fp;
	

	while(cin >> c)
	{
		bool isF=true, isP=true, isFP=true;
		while(!p.empty())
			p.pop();
		while(!f.empty())
			f.pop();
		while(!fp.empty())
			fp.pop();
		
		for(int i=0; i < c; i++){
			cin >> op;
			cin >> x;
			
			if(op == 1){
				p.push(x);
				f.push(x);
				fp.push(x);
				
			}else{
				if(!p.empty()){
					if(p.top() != x)
						isP = false;
					else
						p.pop();
				}else{
					isP=false;
				}
				
				
				if(!f.empty()){
					if(f.front() != x)
						isF = false;
					else
						f.pop();
				}else{
					isF=false;
				}
				
				
				if(!fp.empty()){
					if(fp.top() != x)
						isFP=false;
					else
						fp.pop();
				}else{
					isFP=false;
				}
			}			
		}
		
		if(!isP && !isF && !isFP)
			cout << "impossible\n";
		else if(isP && isFP || isF && isFP)
			cout << "not sure\n";
		else if(isF)
			cout << "queue\n";
		else if(isP)
			cout << "stack\n";
		else if(isFP)
			cout << "priority queue\n";
		
	}
	return 0;
}
