#include <bits/stdc++.h>
#include "archive.h"
using namespace std;

class cache : public archive {
	int c_size;
	list <int> lis;
	map<int,list<int>::iterator> m;
	public:
	cache(int size):c_size(size){ cout<<"Cache size intialized to "<<c_size<<endl; } //Intilizing the size of cache
	
	void insert(int key) {
		if(m.find(key) == m.end()) {
			if(lis.size() == c_size) {
				int delete_key = lis.front();
				string stri = to_string(delete_key);
				archive::database_insert(stri);
				lis.pop_front();
				m.erase(delete_key);
			}
		}
		else {
                     	lis.erase(m[key]);
		}
   		lis.push_back(key);
		m[key]=--lis.end();       
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
	vector<int> data;
	vector<int>::iterator it;
	int random;
	cache obj(10);
	srand(time(0));
	for(i=0; i<100; i++) {
		random = (rand()%30)+1;
		data.push_back(random);
		obj.insert(random);
	}
	cout<<"Input data: "; 
	for(it=data.begin(); it!=data.end(); it++) {
                        cout<<*it<<" ";
        }
	cout<<"\nOutput: ";
	obj.display();
	return 0;
}
