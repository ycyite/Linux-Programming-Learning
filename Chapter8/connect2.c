#include<stdio.h>
#include<stdlib.h>
#include"mysql/mysql.h"

int main(int argc, char* agrv[]){
    MYSQL my_connection;

    mysql_init(&my_connection);
    if(mysql_real_connect(&my_connection, "localhost", "mathew", "123", "foo", 0, NULL, 0))
    {
        printf("Connection success\n");
        mysql_close(&my_connection);
    }else{
        fprintf(stderr, "Connection failed\n");
        if(mysql_errno(&my_connection)){
            fprintf(stderr, "Connection error %d: %s\n", mysql_errno(&my_connection), mysql_error(&my_connection));
        }
    }
    return EXIT_SUCCESS;
}
