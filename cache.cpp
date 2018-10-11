#include<bits/stdc++.h>
using namespace std;

class cache {
	int c_size;
	list <int> lis;
	map<int,list<int>::iterator> m;
	public:
	cache(int size):c_size(size){ cout<<"Cache size intialized to "<<c_size<<endl; } //Intilizing the size of cache
	
	void insert(int key) {
		if(m.find(key) == m.end()) {
			if(lis.size() == c_size) {
				int delete_key = lis.front();
				lis.pop_front();
				m.erase(delete_key);
			}
		}
		else {
                     	lis.erase(m[key]);
		}
   		lis.push_back(key);
		m[key]=--lis.end();       
		display();
	}

	void display() {
		list<int>::iterator it;
		for(it=lis.begin(); it!=lis.end(); it++) {
			cout<<*it<<" ";
		}
		cout<<endl;
	}
};

int main(){
	int i;
	cache obj(5);
	srand(time(0));
	for(i=0; i<10; i++)
		obj.insert((rand()%5)+1);
	obj.display();
	return 0;
}
