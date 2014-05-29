#define N = 255;
void main(){
char *string;

string = (void*)malloc(sizeof(char)*N);
string = DoIngSomeMagic(string);
printf(%s,string);
free(string);
return(0);
}
