#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>

const char *test_file = "/tmp/test_lock";

int main(){
	int file_desc;
	struct flock region_to_lock;
	int res;
	file_desc = open(test_file, O_RDWR | O_CREAT, 0666);
	if(!file_desc){
		fprintf(stderr, "Unable to open %s for read");
	}
}
