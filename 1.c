#include<stdio.h>
int main(){
    int math, phys, chem,bio, comp, env;
    int math_credit=0,phys_credit=0, chem_credit=0, bio_credit=0, comp_credit=0, env_credit=0;
    printf("marks of math, phys, chem,bio, comp, env\n");
    scanf("%d%d%d%d%d%d",&math,&phys,&chem,&bio,&comp,&env);
    printf(" math=%d\n phys=%d\n chem=%d\n bio=%d\n comp=%d\n env=%d\n",math, phys, chem,bio, comp, env);
	
	if(math<=80){
		math_credit=1;
		printf("math_credit=1");
	}
	if(phys<=80){
		phys_credit=1;
		printf("phys_credit=1");
	}
	if(chem<=80){
		chem_credit=1;
		printf("chem_credit=1");
	}
	if(bio<=80){
		bio_credit=1;
		printf("bio_credit=1");
	}
	if(comp<=80){
		comp_credit=1;
		printf("comp_credit=1");
	}
	if(env<=80){
		env_credit=1;
		printf("env_credit=1");
	}
	
    return 0;

}
