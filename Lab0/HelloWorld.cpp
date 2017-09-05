#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
  int n;
  //read number of points from user
  if (argc!=2) {
    printf("usage: hull3d <nbPoints>\n");
    exit(1); 
  }


  n = atoi(argv[1]); 
  printf("you entered n=%d\n", n);
  assert(n>0); 

  for (int i = 0; i < n; i++)
  	{
  			cout << "Hello World" << endl;
  	}
}