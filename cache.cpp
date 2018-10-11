#include <iostream>
using namespace std;

class cache {
	int c_size;
	public:
	cache(int size):c_size(size){ cout<<"Cache size intialized to "<<c_size<<endl; } //Intilizing the size of cache
};

int main(){
	cache obj(5);
	return 0;
}
