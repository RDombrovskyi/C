#include <stdio.h>
#define IN 1
#define OUT 0

main(){
	int c, nc, nw, nl, state;
	state = OUT;
	nc=nw=nl=0;
	
	while((c=getchar()) != EOF){
		if(c==' ')
		 	++nc;
		
		if(c==' '||c=='\t'||c=='\n'){
			state = OUT;
			}
		else if(state == OUT){
			state = IN;
			++nw;
		}
		if(c=='\n'){
			++nl;
			nc=nw=0;
		}
		printf("SPACE:%d NEW LINE:%d WORDS:%d\n", nc, nl, nw);		
	}
}
