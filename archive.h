#ifndef ARECHIVE_HEADER
#define ARECHIVE_HEADER
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
			cout<<"Mysql initialixation failed\n";
		}
		connect = mysql_real_connect(connect, "localhost", "root", "", "archive", 0, NULL, 0);
		if(connect) 
			cout<<"Connection successful\n";
		else {
			cout<<"Connection failed\n";
		}
	}
	void database_insert(string s) {
		str = "INSERT INTO archive VALUES('"+s+"')";
		mysql_query(connect, str.c_str());
	}
	void database_show() {
		MYSQL_RES *res_set;
		MYSQL_ROW row;
		mysql_query (connect,"select * from archive;");
		res_set = mysql_store_result(connect);
		while(((row = mysql_fetch_row(res_set)) != NULL)) {
			cout<< row[0]<<" ";
		}	
	}
	~archive() {
		mysql_close(connect);	
		cout<<"\nMy sql connection closed"<<endl;
	}
};
#endif
