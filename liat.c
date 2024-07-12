#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void traitement(FILE* f, char* pls){
	int a=0, s=0, j=0;
	f=fopen("/var/log/auth.log", "r");
	
for (int i=0;i<20000;i++)
        {
	fscanf(f, "%c", &pls[i]);	
    	}
for (int i=0; i<20000; i++)
        {
	if(pls[i]=='\n') a++;
    	}
for (j=0; j<20000; j++)
        {
	if(pls[j]=='\n') 
        {
			s++;
		}
	if (a-s==10) break;
	    }
for (int k=j; k<20000; k++)
        {
	printf("%c", pls[k]);
	    }
	fclose(f);
}
char* alloc(){
	char*M=NULL;
	M=(char*)malloc(20000*sizeof(char));
	return (M);
}


int main(int argc, char* argv[]){
	
	FILE* f=NULL;
	
	char* pls=NULL;
	pls=alloc();
	
	traitement(f,pls);
	return 0;
}