#include <sqlite3.h>
#include <cstdio>
#include <string>
#include <CLI11.hpp>

sqlite3* db;

//open the database
void openDB(std::string filename, sqlite3* database)
{
    char arr[filename.length() + 1]; 

    for (int x = 0; x < sizeof(arr); x++) { 
        arr[x] = filename[x]; 
    } 

    int opened = sqlite3_open(arr, &database);
    if(opened){ // check if opening the database is successful
        printf("Database could not be opened %s \n", sqlite3_errmsg(database));
    } else {
        printf("opened database successfuly \n");
        db = database;
    }
}

int main(int, char**){
    std::string filename = "inventory.db";
    openDB(filename,  db);


      
}