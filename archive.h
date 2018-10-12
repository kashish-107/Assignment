#include<mysql.h>
#include<string>
#include<iostream>
using namespace std;
class archive {
	MYSQL *connect;
	string str;
	public:
	archive() {
		connect = mysql_init(NULL);
		if(!connect) {
			cout<<"Mysql initialixation failed";
		}
		connect = mysql_real_connect(connect, "localhost", "root", "kashish107", "kashish", 0, NULL, 0);
		if(connect) 
			cout<<"Connection successful";
		else {
			cout<<"Connection failed";
		}
	}
	void database_insert(string s) {
		cout<<"Inserting  value : "<<s<<endl;
		str = "INSERT INTO archive VALUES('"+s+"')";
		mysql_query(connect, str.c_str());
	}
	void database_show() {
		MYSQL_RES *res_set;
		MYSQL_ROW row;
		mysql_query (connect,"select * from archive;");
		res_set = mysql_store_result(connect);
		while(((row = mysql_fetch_row(res_set)) != NULL)) {
			cout<< row[0] << endl;
		}	
	}
	~archive() {
		mysql_close(connect);	
		cout<<"My sql connection closed"<<endl;
	}
};

