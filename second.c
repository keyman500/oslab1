#include <stdio.h>

int main( int argc, char *argv[] )

{

  int i;



  printf( " Executing the main function of a simple program" );



  for( i=0 ; i<=argc-1 ; i++ )

  {

	printf( "\n%d\t%s", i, argv[i] );

  }





  return 0;

}