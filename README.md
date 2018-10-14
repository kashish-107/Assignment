1. Run the following commands to setup MySql on your system:
   Note: While setting up please give root as user and enter as password
	sudo apt-get install libmysql++
 	sudo apt-get install libmysqlclient-dev

2. After installing MySql run the following commands to create database and table.
	-> mysql
	-> create db archive;
	-> use archive;
	-> create table archive(value VARCHAR(50));

3. Run the following command to run the code
	-> ./cache

4. To recompile the code run the  following command:
	-> g++ cache.cpp -o cache -std=c++0x -L/usr/include/mysql -lmysqlclient -I/usr/include/mysql 







	
