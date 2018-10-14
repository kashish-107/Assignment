1. Run the following commands to setup MySql on your system:
   Note: While setting up please give root as user and enter as password
<<<<<<< HEAD


=======
   
>>>>>>> b3685e673cc2afc9282f7a7dccf5f89239198146
	sudo apt-get install libmysql++
	
 	sudo apt-get install libmysqlclient-dev
	

2. After installing MySql run the following commands to create database and table.

<<<<<<< HEAD

=======
>>>>>>> b3685e673cc2afc9282f7a7dccf5f89239198146
	-> mysql
	
	-> create db archive;
	
	-> use archive;
	
	-> create table archive(value VARCHAR(50));
	

3. Run the following command to run the code

	-> ./cache

4. To recompile the code run the  following command:
<<<<<<< HEAD
	-> g++ cache.cpp -o cache -std=c++0x -L/usr/include/mysql -lmysqlclient -I/usr/include/mysql 	
=======

	-> g++ cache.cpp -o cache -std=c++0x -L/usr/include/mysql -lmysqlclient -I/usr/include/mysql 







	
>>>>>>> b3685e673cc2afc9282f7a7dccf5f89239198146
